#include <bits/stdc++.h>
using namespace std;



void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    int op = 5;

    vector<int> nums;
    nums.push_back(a);
    nums.push_back(b);
    nums.push_back(c);

    sort(nums.begin(),nums.end());

    // Apply the operations
    while (op > 0) {
      
        sort(nums.begin(),nums.end());
        nums[0]++;
        op--;
    }
    
    // Calculate the product
    int p = nums[0] * nums[1] * nums[2];
    cout<<p<<endl;

}

int main() {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }


return 0;

}