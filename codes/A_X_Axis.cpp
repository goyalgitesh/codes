#include <bits/stdc++.h>
using namespace std;

void solve() {
int x1,x2,x3;
cin>>x1>>x2>>x3;


int vec[3] = {x1, x2, x3};
 sort(vec, vec + 3);

int med = vec[1];

cout<<abs(x1-med) + abs(x2-med) + abs(x3-med)<<endl;



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