#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    map<string, int> seen;
    for (int i = n - 1; i >= 0; i--)
    {
        if (seen[v[i]] == 0)
        {
            cout << v[i] << endl;
            seen[v[i]] = 1;
        }
    }
    return 0;
}