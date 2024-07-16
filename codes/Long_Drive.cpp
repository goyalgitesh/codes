#include <bits/stdc++.h>
using namespace std;

void solve() {
    double x,y;
    cin>>x>>y;

    double numerator = 10 * (x - y);
    double denominator = y - 100;

    int res = ceil(numerator / denominator);

    cout<<res<<endl;

}

int main() {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }



cout<<" "<<endl;
return 0;

}