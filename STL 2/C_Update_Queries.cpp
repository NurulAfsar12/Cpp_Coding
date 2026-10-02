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
        int n, m;
        cin >> n >> m;

        string s;
        cin >> s;

        vector<int> v(m);
        for (int i = 0; i < m; i++)
        {
            cin >> v[i];
        }
        string s1;
        cin >> s1;
        sort(v.begin(), v.end());
        vector<int> pos;
        for (int i = 0; i < m; i++)
        {
            if (i == 0 || v[i] != v[i - 1])
            {
                pos.push_back(v[i]);
            }
        }
        sort(s1.begin(), s1.end());
        for (int i = 0; i < pos.size(); i++)
        {
            s[pos[i] - 1] = s1[i];
        }
        cout << s << endl;
    }

    return 0;
}