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
        vector <int> v(n+1);
        map <int, int> mp;
        for(int i=1; i<=n; i++)
        {    
            cin >> v[i];
            mp[v[i]]++;
        }
        for(int i=1; i<=n; i++)
        {
            if(mp[v[i]] == 1)
            {
                cout << i << endl;
            }
        }

    }
    return 0;
}