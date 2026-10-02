#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            freq[v[i]]++;
        }
        int mx = 0;
        for (auto [num, cnt] : freq)
        {
            mx = max(mx, cnt);
        }
        int mx1 = n - mx;
        if(mx == n)
        {
            cout << n << endl;
        }
        else if (mx <= mx1)
        {
            if (n % 2 == 0)
            {
                cout << 0 << endl;
            }
            else
                cout << 1 << endl;
        }
        else
        {
            cout << mx - mx1 << endl;
        }
        
    }
    return 0;
}