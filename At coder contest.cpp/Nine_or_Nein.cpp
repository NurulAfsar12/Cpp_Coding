#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int x,y;
    cin >> x >> y;
    if((x-y == 9) || (x+y == 9) || (x*y == 9) || (x/y == 9) && (x%y==0))
    {
        cout <<"Nine"<<endl;
    }
    else
        {
            cout <<"Nein"<<endl;
        }
    return 0;
}