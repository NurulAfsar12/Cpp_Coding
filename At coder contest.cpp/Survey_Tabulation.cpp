#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector <string> s(n);
    for(int i=0; i<n; i++)
    {
        cin >> s[i];
        for(auto &c : s[i])
        {
            c = tolower(c);
        }
    }
    int mx = 0;
    for(int i=0; i<n; i++)
    {
        int cnt = 0;
        for(int j = 0; j<n; j++)
        {
            if(s[i] == s[j])
            {
                cnt++;
            }
        }
        mx = max(mx,cnt);    
    }
    cout << mx << endl;
    
    return 0;
}