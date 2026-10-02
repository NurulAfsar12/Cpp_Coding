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
        vector <int> a(n);
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        int mn = 0;
        int mx = 0;
        for(int i=0; i<n-1; i++)
        {
            mn = min(a[i], a[i+1]);
            mx = max(mx,mn);
        }
        cout << mx << endl;
    }
    return 0;
}