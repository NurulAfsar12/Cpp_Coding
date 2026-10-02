#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        if (n <= 3)
        {
            cout << 0 << endl;
        }
        sort(v.begin(), v.end());
        int min_val = min({v[n - 1] - v[2], v[n - 2] - v[1], v[n - 3] - v[0]});
        cout << min_val << endl;
    }
    return 0;
}