#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        // Use a set to find unique elements and sort them
                // Use a set to find unique elements and sort them
        set<int> uniqueElements(a.begin(), a.end());
        
        // If there are less than two unique elements, Alice can't guarantee a win
        if (uniqueElements.size() < 2) {
            cout << "0\n";
        } else {
            // Find the second largest unique element
            auto it = uniqueElements.rbegin();
            ++it; // Move to the second largest
            cout << *it << "\n";
        }
    }
    
    return 0;
}
