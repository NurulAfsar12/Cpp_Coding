#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int a = x + y;
        int b = z;
        int cnt = 1;
        if (y >= z)
        {
            cout << -1 << endl;
            continue;
        }
        while (a > b)
        {
            cnt++;
            a += y;
            b += z;
        }
        cout << cnt << endl;
    }
}
