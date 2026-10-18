#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
    int a, b;
    cin >> a >> b;
    if(a >= (b*2))
    {
        cout << b << endl;
    }
    else if(ceil(a/2.0) > ceil(b/2.0))
    {
        cout << ceil(b/2.0) << endl;
    }
    else
        cout <<-1<<endl;
    }
    return 0;
}
