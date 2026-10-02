#include <bits/stdc++.h>
using namespace std;  

int main()
{
    int x;
    cin >> x;
    
    cout <<3/2<<endl;
    if (x < 5)
    {
        cout << "Yes" << endl;
    }
    else if (ceil(x / 5.0) == ceil((x + 1) / 5.0))
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;
    return 0;
}