#include <bits/stdc++.h>
using namespace std;

bool canFormIslands(int n, int k) {
    int minlen = k * (k + 1) / 2;
    
    // Available length to place 0s bounded by 1s
    int avlen = n - (k - 1);
    
    // Check if the required length can fit in the available length
    return minlen <= avlen;
}

void solve() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        if (canFormIslands(n, k)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    solve();
    
    return 0;
}
