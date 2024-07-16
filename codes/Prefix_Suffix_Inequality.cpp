#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N;
    cin >> N;
    
    vector<int> A(N);
    
    for (int i = 0; i < N; ++i) {
        if (i % 2 == 0) {
            A[i] = 1;
        } else {
            A[i] = 2;
        }
    }
    
    for (int i = 0; i < N; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}

