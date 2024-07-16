#include <bits/stdc++.h>
using namespace std;

void solve() {
int n,k;
cin>>n>>k;

if(n==1) {
    cout<<0<<endl;
}

else {
    priority_queue<int> pq;
    int op = 0;
    pq.push(n);

    bool flag = true;
    int countOnes = 0;
    
    while (flag) {
        int u = pq.top();
        int split = k;
        pq.pop();


        int nOnes = 0;

        // subtract 1 for each piece for dividing into max pieces
        while(split !=1 && u > 1) {
            nOnes++;
            u--;
            split--;
        }
        while(nOnes--) {
            pq.push(1);
            countOnes++;
        }
        if (u==1) countOnes++;
        pq.push(u);

            ++op;

        if(countOnes == n) flag = false;

        }

        cout<<op<<endl;

    }

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
