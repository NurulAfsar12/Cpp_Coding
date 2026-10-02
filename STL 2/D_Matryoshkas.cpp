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
        map<long long, int> mp;
        for(int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            mp[x]++;
        }

        int cnt = 0;
        long long prev = 0;
        for(auto p : mp)
        {
            long long x = p.first;
            int cur = p.second;
            if(x != prev + 1)
            {
                cnt += cur;
            }
            else
            {
                cnt += max(0, cur - mp[prev]);
            }
            prev = x;
        }
        cout << cnt << endl;
    }
    return 0;
}