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
        int a,b,c;
        cin >> a >> b >> c;
        
        int cnt = 0;
        int mn = INT_MAX;
        int mx = INT_MIN;
        if(a == b || b==c || a==c)
        {
            cout << 0 << endl;
        }
        else{
            mn = min(a, min(b,c));
            mx = max(a,max(b,c));
            while(mn <= mx)
            {
                mn++;
                mx--;
                cnt++;
                if(mx == a || mx == b || mx == c || mn == a || mn == b || mn == c)
                {
                    break;
                }
            }
            cout << cnt << endl;

        }
    }
    return 0;
}