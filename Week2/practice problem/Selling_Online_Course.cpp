#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int x;
    cin >> x;
    
    double c  = (x * (20.0/100));
    double ans = ceil(100/c);
    if(x == 0){
        cout << "0" << endl;
    }
    else{

         cout << ans << endl;
    }
    

    return 0;
}