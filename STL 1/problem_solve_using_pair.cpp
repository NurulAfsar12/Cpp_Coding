#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    pair<string, string> leaves[n];
    for (int i = 0; i < n; i++)
    {
        cin >> leaves[i].first >> leaves[i].second;
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        bool same = false;
        for (int j = 0; j < i; j++)
        {
            if (leaves[i].first == leaves[j].first && leaves[i].second == leaves[j].second)
            {
                same = true;
                break;
            }
        }
        if (!same)
        {
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}