#include <bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    if (n < 2)
        return n;

    return fibo(n - 1) + fibo(n-2);
}

int main()
{
    int a;
    cin >> a;
    cout << fibo(a);
    return 0;
}