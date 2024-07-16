#include <bits/stdc++.h>
using namespace std;

void solve() {

    int n;
    cin>>n;
    vector<pair<int,int>> spells(n);
    for(int i=0;i<n;i++) {
        cin>>spells[i].first;
        cin>>spells[i].second;
    }

    int max_strength = INT_MIN;
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            int strength = spells[i].first * spells[j].second + spells[j].first * spells[i].second;
            max_strength = max(max_strength,strength);
        }
    }

cout<<max_strength<<endl;

}

int main() {

    int t;
    cin>>t;
    while(t--) {
        solve();
    }


return 0;

}