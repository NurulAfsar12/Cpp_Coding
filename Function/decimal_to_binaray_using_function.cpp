#include <bits/stdc++.h>
using namespace std;

int decToBinary(int n)
{
    int ans = 0, pow = 1;
    while (n > 0)
    {
        int rem = n % 2;
        n /= 2;
        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}

int binaryToDecimal(int n)
{
    int ans = 0, pow = 1;
    while (n > 0)
    {
        int rem = n % 10;
        n /= 10;
        ans += (rem * pow);
        pow *= 2;
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int decNum;
    cin >> decNum;
    int binNum;
    cin >> binNum;

    cout << decToBinary(decNum) << endl;
    cout << binaryToDecimal(binNum) << endl;

    return 0;
}