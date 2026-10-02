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
        string s;
        cin >> s;

        int freq[26] = {0};
        for (char c : s)
        {
            freq[c - 'a']++;
        }

        string r = "";
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] > 0)
            {
                r += char(i + 'a');
            }
        }

        map<char, char> mp;
        for (int i = 0; i < r.size(); i++)
        {
            mp[r[i]] = r[r.size() - 1 - i];
        }

        for (char c : s)
        {
            cout << mp[c];
        }
        cout << endl;
    }

    return 0;
}