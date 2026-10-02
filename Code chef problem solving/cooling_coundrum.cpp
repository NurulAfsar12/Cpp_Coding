#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int initial_tmp = 0;
        while (x > y)
        {
            initial_tmp += ceil(x / 10.0);
            x--;
           
        }
        cout << initial_tmp << endl;
    }
    return 0;
}
 