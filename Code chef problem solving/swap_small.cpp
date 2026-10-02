#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector <int> v(n);
        int mx = INT_MIN;
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
            mx = max(mx,v[i]);
        }
        int cnt = 0;
        for(auto x : v)
        {
            if(x == mx)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}