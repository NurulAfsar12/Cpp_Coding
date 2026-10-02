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

        vector<long long> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long cur = 0;
        bool ok = true;

        for (int i = 0; i < n; i++)
        {
            cur += a[i];
            long long a = i + 1;
            long long b = i + 2;
            long long need = (a * b) / 2;

            if (cur < need)
            {
                ok = false;
                break;
            }
        }

        if (ok)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}