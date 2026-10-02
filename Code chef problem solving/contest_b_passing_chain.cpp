#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        int x = 1;
        int cnt = 0;
        for(int i=0; i<n; i++)
        {
            if(x+k <= n)
            {
                cnt = x + k;
                x = cnt;
            }
            else
            {
                cout << x << endl;
                break;
            }
        }
    }
    return 0;
}