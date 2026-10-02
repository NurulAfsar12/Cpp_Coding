#include <bits/stdc++.h>
using namespace std;

bool reach(int n)
{
    if (n < 1)
        return false;
    if (n == 1)
        return true;

    while (n > 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else if (n >= 4)
        {
            n = n - 3;
        }
        else
        {
            return false;
        }
    }
    return n == 1;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (reach(n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}