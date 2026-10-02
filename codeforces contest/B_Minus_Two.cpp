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

        int cnt1 = 0, cnt2 = 0, cnt3 = 0;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;

            if (x % 2 == 1)
                cnt1++;
            else if (x % 4 == 0)
                cnt2++;
            else
                cnt3++;
        }

        cout << max({cnt1, cnt2, cnt3}) << endl;
    }

    return 0;
}