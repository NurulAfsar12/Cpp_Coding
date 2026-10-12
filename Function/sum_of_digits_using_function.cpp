#include <bits/stdc++.h>
using namespace std;

int sumOfDigit(int num)
{
    int digSum = 0;
    while(num > 0)
    {
        int lastDig = num % 10;
        num /= 10;

        digSum += lastDig;
    }
    return digSum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cout <<"Sum = "<<sumOfDigit(2356)<<endl;
    return 0;
}