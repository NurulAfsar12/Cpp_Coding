#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    int sum = 0;
    if(a>b)
    {
        for(int i=0; i<2; i++)
        {
            sum+=a;
            a--;
        }
         
    }
    else if(b>a)
    {
        for(int i=0; i<2; i++)
        {
            sum+=b;
            b--;
        }
         
    }
    else
    {
        sum = a + b;
    }
    cout << sum << endl;

    return 0;
}