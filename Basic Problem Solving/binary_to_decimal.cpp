#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    int ans = 0, pow = 1;
    while (n > 0)
    {
        int rem = n % 2;
        n /= 2;
        ans += (rem * pow);
        pow *= 10;
    }
    cout << ans << endl;
    return 0;
}