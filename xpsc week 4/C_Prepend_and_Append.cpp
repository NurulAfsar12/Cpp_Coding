#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int l=0, r = n-1;
        int cnt = 0;
        while(l <= r)
        {
            if(s[l] != s[r])
            {
                cnt += 2;
                l++;
                r--;
            }
            else
                break;
            
        }
        cout << n - cnt << endl;

    }
    return 0;
}