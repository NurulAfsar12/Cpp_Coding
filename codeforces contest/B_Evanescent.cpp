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
        int cnt = 1;
        for(int i=0; i<n-1; i++)
        {
            if(s[i] != s[i+1])
            {
                cnt++;
            }
        }

        int mn_len = INT_MAX;
        for(int i=1; i<n-1; i++)
        {
            int cnt1 = cnt;
            if(s[i] != s[i-1])
            {
                cnt1--;
            }
            if(s[i] != s[i+1])
            {
                cnt1--;
            }
            if(s[i-1] != s[i+1])
            {
                cnt1++;
            }
            mn_len = min(mn_len,cnt1);
        }
        cout << mn_len << endl;
    }
    return 0;
}