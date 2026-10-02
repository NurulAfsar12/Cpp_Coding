#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,k;
    cin >> n >> k;
    map <int, int> mp;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }

    int mx = 0;
    for(auto x:mp)
    {
        mx = max(mx, x.second);
    }
    int cnt = 0;
    for(int i=1; i<=k; i++)
    {
        if(mp[i] + 1 >= mx)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}