#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,z;
    cin >> x >> y >> z;
    int n = x + y + z;

    if(n == 1)
    {
        cout <<"Yes"<<endl;
    }
    else if(n==2 && ((x*1) + (y*0.5) >= 0.5))
    {
        cout <<"Yes"<<endl;
    }
    else if(n == 3 && ((x*1) + (y*0.5) >= n/2.0))
    {
        cout <<"Yes"<<endl;
    }
    else if(n == 4 && ((x*1) + (y*0.5) > n/2.0))
    {
        cout <<"Yes"<<endl;
    }
    else
        cout <<"No"<<endl;

    return 0;
}