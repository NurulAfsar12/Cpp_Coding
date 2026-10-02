#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
     
    for(int i=0; i<n; i++)
    {
        if(s[i] == 'x')
        {
            if(i==0 )
            {
                if(n==1 || s[i+1] == 'x')
                {
                    cnt++;
                }
            }
            else if(i==n-1)
            {
                if(s[i-1] == 'x')
                {
                    cnt++;
                }
            }
            else
            {
                if(s[i-1]=='x' && s[i+1] == 'x')
                {
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}