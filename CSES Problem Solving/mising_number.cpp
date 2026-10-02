#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,sum = 0;
    cin >> n;
    
    for(long long i=0; i<n-1; i++)
    {
        long long x;
        cin >> x;
        sum += x;
    }
    cout << n * (n+1)/2 - sum << endl;
    return 0;
}