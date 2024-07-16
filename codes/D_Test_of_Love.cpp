#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n,m,k;
   cin>>n>>m>>k;
   string s;
   cin>>s;

   int pos = -1;
   for(int i=0; i<s.size(); i++) {

    // case 1; IF THERE IS A LOG
    if(s[i] == 'L' && (s[pos] == 'L' || s[pos] == -1) && i-pos <= m) {
        pos = i;
    }
    
    // case 3: IF THERE IS A WATER




   }




}

int main() {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }




return 0;

}