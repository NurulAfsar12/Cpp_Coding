#include <bits/stdc++.h>
using namespace std;

int sum_of_1toN(int n)
{
    int sum = 0;
    for(int i=1; i<=n; i++)
    {
        sum += i;   
    }
    return sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cout <<"Sum = " << sum_of_1toN(5) <<endl;
    cout <<"Sum = " << sum_of_1toN(10) <<endl;
    return 0;
}