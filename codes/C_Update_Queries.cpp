#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    vector<int> arr(m,0);
    for(int i=0; i<m; i++) {
        cin>>arr[i];
    }
    string c;
    cin>>c;
    sort(c.begin(),c.end());
    map<int,int> mp;
    for(auto it: arr) {
        mp[it]++;
    }
    int ext = 0;
    for(auto it: mp) {
        ext = ext + it.second - 1;
    }
    c = c.substr(0, m - ext);
    int i=0;
    for(auto it: mp) {
        int pos = it.first;
        s[pos-1] = c[i];
        i++;
    }
    cout<<s<<endl;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

