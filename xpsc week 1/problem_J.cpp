#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long int> v(n);
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    sort(v.begin(), v.end());
    if (sum % 2 == 0)
    {
        cout << sum << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 == 1)
            {
                cout << sum - v[i] << endl;
                break;
            }
        }
    }

    return 0;
}