#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    bool vacant = false;
    int col = x - 'A';
    for (int i = 0; i < n; i++)
    {
        if (v[i][col] == 'o')
        {
            vacant = true;
            break;
        }
    }
    if (vacant)
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;
    return 0;
}