#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    if (n == 0)
    {
        cout << "0" << endl;
        return 0;
    }
    if (n == 1 || n == 2)
    {
        cout << "1" << endl;
        return 0;
    }
    if (n == 3)
    {
        cout << "2" << endl;
        return 0;
    }

    long long int t[n + 1];
    t[0] = 0;
    t[1] = 1;
    t[2] = 1;
    t[3] = 2;
    for (int i = 4; i <= n; i++)
    {
        t[i] = t[i - 1] + t[i - 2] + t[i - 3] + t[i - 4];
    }
    cout << t[n] << endl;
    return 0;
}