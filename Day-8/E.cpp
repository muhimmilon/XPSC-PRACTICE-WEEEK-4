#include <iostream>
#include <vector>
using namespace std;

const int MAXN = 200001;

int N;
vector<int> A(MAXN); // Values of each vertex
vector<int> degree(MAXN); // Degree of each vertex
vector<vector<int>> tree(MAXN); // Adjacency list for the tree

void dfs(int node, int parent) {
    for (int neighbor : tree[node]) {
        if (neighbor != parent) {
            dfs(neighbor, node);
            degree[node]++;
        }
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        cin >> N;

        // Read values of each vertex
        for (int i = 1; i <= N; ++i) {
            cin >> A[i];
        }

        // Read edges to form the tree
        for (int i = 1; i < N; ++i) {
            int u, v;
            cin >> u >> v;
            tree[u].push_back(v);
            tree[v].push_back(u);
        }

        // Initialize degree array and calculate degrees
        fill(degree.begin(), degree.end(), 0);
        dfs(1, -1);

        // Collect vertices with odd degree
        vector<int> to_remove;
        for (int i = 1; i <= N; ++i) {
            if (degree[i] % 2 != 0) {
                to_remove.push_back(i);
            }
        }

        // Output results
        cout << to_remove.size() << endl;
        for (int vertex : to_remove) {
            cout << vertex << " ";
        }
        cout << endl;

        // Clear tree for next test case
        for (int i = 1; i <= N; ++i) {
            tree[i].clear();
        }
    }

    return 0;
}
