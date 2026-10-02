#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int m, p;
        cin >> m >> p;

        int time = 299 - m;
        int penalty = (1000 - p - m) / 21;
        int mn = min(time, penalty);
        cout << max(0, mn) << endl;
    }
    return 0;
}