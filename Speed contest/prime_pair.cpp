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
        int n;
        cin >> n;

        int cnt1 = 0, cnt2 = 0, cnt3 = 0;

        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if(x == 1)
                cnt1++;
            else if(x == 2)
                cnt2++;
            else
                cnt3++;
        }

        long long ans = 0;

        // 1 + 1 = 2 (prime)
        ans += (long long)cnt1 * (cnt1 - 1) / 2;

        // 1 + 2 = 3 (prime)
        ans += (long long)cnt1 * cnt2;

        // 2 + 3 = 5 (prime)
        ans += (long long)cnt2 * cnt3;

        cout << ans << '\n';
    }

    return 0;
}