#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class UnionFind {
private:
    vector<int> parent;
    vector<int> size;
public:
    UnionFind(int n) {
        parent.resize(n);
        size.resize(n, 1);
        for (int i = 0; i < n; ++i)
            parent[i] = i;
    }

    int find(int x) {
        if (parent[x] != x)
            parent[x] = find(parent[x]);
        return parent[x];
    }

    void unite(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);
        if (rootX != rootY) {
            parent[rootY] = rootX;
            size[rootX] += size[rootY];
        }
    }

    int getSize(int x) {
        return size[find(x)];
    }
};

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<string> grid(n);
        for (int i = 0; i < n; ++i)
            cin >> grid[i];

        UnionFind uf(n * m);
        vector<int> rowCounts(n, 0), colCounts(m, 0);

        // Build connected components and count sizes
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] == '#') {
                    if (j > 0 && grid[i][j - 1] == '#')
                        uf.unite(i * m + j, i * m + j - 1);
                    if (i > 0 && grid[i - 1][j] == '#')
                        uf.unite(i * m + j, (i - 1) * m + j);
                    rowCounts[i]++;
                    colCounts[j]++;
                }
            }
        }

        // Find the maximum size of the connected component
        int maxComponentSize = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                int componentSize = rowCounts[i] + colCounts[j] - (grid[i][j] == '#');
                maxComponentSize = max(maxComponentSize, uf.getSize(i * m + j));
            }
        }

        cout << maxComponentSize << endl;
    }

    return 0;
}
