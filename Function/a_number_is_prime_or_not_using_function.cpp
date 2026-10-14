#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
    if(n < 2)
    {
        return false;
    }
    for(int i=2; i*i<=n; i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    if(is_prime(n))
    {
        cout <<"Is prime"<<endl;
    }
    else
        cout <<"Not Prime"<<endl;
    
    return 0;
}