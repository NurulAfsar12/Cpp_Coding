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
        int x, y, p;
        cin >> x >> y >> p;
        if (x * y >= p)
        {
            cout << 0 << endl;
            continue;
        }

        int ans = INT_MAX;
        for (int i = 0; i < p; i++)
        {
            int a = x + i;
            int b = 0;
            while (a * (y + b) < p)
            {
                b++;
            }
            ans = min(ans, i + b);
        }
        cout << ans << endl;
    }
    return 0;
}