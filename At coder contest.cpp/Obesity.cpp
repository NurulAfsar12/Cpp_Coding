#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int h, w;
    cin >> h >> w;

    if (w * 100 * 100 >= 25 * h * h)
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;
    return 0;
}