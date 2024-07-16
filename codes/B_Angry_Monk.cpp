#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int> a(k,0);
    for(int i=0; i<k; i++) {
        cin>>a[i];
    }
    int max_piece = *max_element(a.begin(), a.end());
    int split_operations = 0;
    int ones_count = 0;

    // Remove one occurrence of the maximum element
    bool max_piece_used = false;
    
    for (int length : a) {
        if (length == max_piece && !max_piece_used) {
            max_piece_used = true;  // Use this as the main piece and skip further splits
            continue;
        }
        if (length == 1) {
            ones_count++;
        } else {
            split_operations += length - 1;
            ones_count += length;
        }
    }

    // Add 1s from the largest piece
    ones_count++;  // The largest piece itself

    // Merge operations needed to merge all 1s into one piece
    int merge_operations = ones_count - 1;

    // Total operations is the sum of split and merge operations
    int total_operations = split_operations + merge_operations;

    cout << total_operations << endl;

}

int main() {
    int t;
    cin>>t;
    while(t--) {
    solve();

    }

return 0;

}