#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> adj_list[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;

        if (adj_list[x].size() == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            vector<int> c = adj_list[x];
            sort(c.begin(), c.end(), greater<int>());

            for (int i = 0; i < c.size(); i++)
            {
                cout << c[i];
                if (i < c.size() - 1)
                    cout << " ";
            }
            cout << endl;
        }
    }

    return 0;
}