#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, t;
    cin >> a >> b >> t;
    int bis = 0;
    for (int i = 1; i * a <= t; i++)
    {
        {
            bis += b;
        }
    }
    cout << bis << endl;
    return 0;
}