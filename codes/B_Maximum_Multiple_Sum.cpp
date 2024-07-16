#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;

    int maxSum = 0;
    int optimalX = 2;
    
    for (int x = 2; x <= n; ++x) {
        int k = n / x;
        int sumX = x * k * (k + 1) / 2;
        
        if (sumX > maxSum) {
            maxSum = sumX;
            optimalX = x;
        }
    }
    cout<<optimalX<<endl;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        solve();
    }




return 0;

}