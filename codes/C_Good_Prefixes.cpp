#include <bits/stdc++.h>
using namespace std;



void solve() {
 int n;
    cin >> n;
    vector<long long int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    if (n == 1 && v[0] == 0) { // base condition
        cout << 1 << endl;
        return;
    }

    long long sum = 0;
    long long count = 0;
    unordered_map<long long int, bool> mp;


    for (int i = 0; i < n; i++) {
        mp[v[i]] = true;

        sum += v[i];

        if (sum % 2 == 0 && mp.find(sum/2) != mp.end()) {
            count++;
        }
    }

    cout << count << endl;

}

int main() {
 int t;
 cin>>t;
 while(t--) {
    solve();
 }



return 0;

}