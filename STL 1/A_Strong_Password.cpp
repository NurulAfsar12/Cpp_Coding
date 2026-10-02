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
        string s;
        cin >> s;
        bool found = false;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == s[i + 1] && s[i] != 'a')
            {
                s.insert(i + 1, 1, 'a');
                found = true;
                break;
            }
            else if (s[i] == s[i + 1] && s[i] != 'b')
            {
                s.insert(i + 1, 1, 'b');
                found = true;
                break;
            }
        }
        if (found)
            cout << s << endl;
        else
        {
            if (s[s.size() - 1] != 'a'){
                s += 'a';
                cout << s << endl;
            }
            else
            {
                s += 'b';
                cout << s << endl;
            }
        }
    }
    return 0;
}