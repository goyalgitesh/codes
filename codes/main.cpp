#include <bits/stdc++.h>
using namespace std;

bool countIslands(string binaryString, int k) {
    
    binaryString.push_back('1');
    int islandCount = 0;
    int n = binaryString.size();
    unordered_set<int> islandLengths;
    
    for (int i = 0; i < n; ++i) {
        if (binaryString[i] == '1') {
            int j = i + 1;
            int length = 0;
            while (j < n && binaryString[j] == '0') {
                ++j;
                ++length;
            }
            if (j < n && binaryString[j] == '1' && length > 0) {
                if (islandLengths.find(length) != islandLengths.end()) {
                    return false; // Found a duplicate length
                }
                islandLengths.insert(length);
                ++islandCount;
            }
            i = j - 1;
        }
    }

    return (islandCount == k);
}

void backtrack(string &temp, unordered_map<string,int> &m, int &n, int &k, bool &res) {
    if(temp.size() == n) {
        if(countIslands(temp, k)) {
           res = true;
           return;
        }
    }
    temp.push_back('0');
    backtrack(temp, m, n, k, res);

    temp.pop_back();
    temp.push_back('1');

    backtrack(temp, m, n, k, res);
}

void solve() {
    int n, k;
    cin>>n>>k;
    string temp = "";
    bool res = false;
    unordered_map<string,int> m;

    backtrack(temp,m,n,k,res);

    if(res) cout<<"YES"<<endl; 
    else  cout<<"NO"<<endl;
    
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }


return 0;

}