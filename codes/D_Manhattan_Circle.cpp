#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
        cin >> n >> m;
 
        vector<vector<char>> arr(n, vector<char>(m, '.'));
 
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
 
        int top = INT_MAX, bottom = INT_MIN, left = INT_MAX, right = INT_MIN;
 
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] == '#')
                {
                    top = min(top, i);
                    bottom = max(bottom, i);
                    left = min(left, j);
                    right = max(right, j);
                }
            }
        }
 
        top++;
        bottom++;
        left++;
        right++;
 
        cout << (top + bottom) / 2 << " " << (left + right) / 2 << endl;

}
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
 
    return 0;
}