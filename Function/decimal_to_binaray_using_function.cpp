#include <bits/stdc++.h>
using namespace std;

int dec_to_Binary(int n)
{
    int ans = 0, pow = 1;
    while(n > 0)
    {
        int rem = n%2;
        n /= 2;
        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int dec_Num;
    cin >> dec_Num;
 
    cout << dec_to_Binary(dec_Num) << endl;
    return 0;
}