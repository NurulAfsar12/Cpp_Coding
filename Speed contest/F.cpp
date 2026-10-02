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
        int a,b,x;
        cin >> a >> b >> x;
        
        int area = x * x;
        if(a*b <= area)
        {
            cout << 0 << endl;
        }
        else if(a > area  &&  b>area)
            {
                cout << 2 << endl;
            }
        else{
            cout << 1 << endl;
        }

    }
    return 0;
}