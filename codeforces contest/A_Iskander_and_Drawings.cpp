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
        string s;
        cin >> s;
        int cnt = 0;
        int mx = 0;
        for(int i=0; i<n; i++)
        {
            if(s[i] == '#')
            {
                cnt++;
                mx = max(mx,cnt);

            }
            else
                cnt = 0;
        }
        cout << ceil(mx/2.0) << endl;
    }
    return 0;
}