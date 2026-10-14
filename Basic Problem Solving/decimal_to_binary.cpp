#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int dec_Num;
    cin >> dec_Num;

    int ans = 0, pow = 1;
    while(dec_Num > 0)
    {
        int rem = dec_Num % 2;
        dec_Num /= 2;
        ans += (rem * pow);
        pow *= 10;
    }
    cout << ans <<endl;
    return 0;
}