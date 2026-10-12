#include <bits/stdc++.h>
using namespace std;
int factN(int n)
{
    int fact = 1;
    for(int i=1; i<=n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cout << "Factorial = "<<factN(4)<<endl;
    return 0;
}