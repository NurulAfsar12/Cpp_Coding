#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    int revNum = 0;
    while(n > 0)
    {
        int lastDigit = n % 10;
        revNum = revNum * 10 + lastDigit;
        n /= 10;
    }
    cout << revNum << endl;
    return 0;
}