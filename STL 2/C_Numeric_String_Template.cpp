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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int m;
        cin >> m;
        while (m--)
        {
            string s;
            cin >> s;
            if (s.size() != n)
            {
                cout << "NO" << endl;
                continue;
            }
            map<int, char> mp1;
            map<char, int> mp2;

            bool same = true;
            for (int i = 0; i < n; i++)
            {
                int x = a[i];
                char c = s[i];
                if (mp1.count(x))
                {
                    if (mp1[x] != c)
                    {
                        same = false;
                        break;
                    }
                }
                else
                {
                    mp1[x] = c;
                }
                if (mp2.count(c))
                {
                    if (mp2[c] != x)
                    {
                        same = false;
                        break;
                    }
                }
                else
                {
                    mp2[c] = x;
                }
            }

            if (same)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}