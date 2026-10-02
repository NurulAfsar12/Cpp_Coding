#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    map<string, string> ans, has;

    for (int i = 1; i <= q; i++)
    {
        string old, New;
        cin >> old >> New;
        if (has.find(old) != has.end())
        {
            string s = has[old];
            ans[s] = New;
            has.erase(old);
            has[New] = s;
        }
        else
        {
            ans[old] = New;
            has[New] = old;
        }
    }

    cout << ans.size() << endl;
    for (auto [x, y] : ans)
    {
        cout << x << " " << y << endl;
    }
    return 0;
}