#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--)
    {
        long long x,y;
        cin >> x >> y;

        long long x2 = x * x;
        long long x4 = x * x * x * x;
        long long y2 = y * y;

        if(x4 + 4*y2 == 4*x2*y)
        {
            cout <<"YES"<<endl;
        }
        else
        {
            cout <<"NO"<<endl;
        }
    }
    return 0;
}