#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        vector <int>  v = {x,y,z};
        sort(v.begin(), v.end());

        if(v[0] + v[1] > v[2])
        {
            cout << 0 << endl;
        }
        else
            cout << v[2] - (v[0] + v[1] - 1) << endl;
    }
    return 0;
}