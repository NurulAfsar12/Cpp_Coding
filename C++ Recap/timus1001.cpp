#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<long long> v;
    long long x;
    while(cin >> x)
    {
        v.push_back(x);
    }
    cout << fixed << setprecision(4);
    for(int i=v.size()-1; i>= 0; i--)
    {
         cout <<sqrtl(v[i])<<" ";
    }
    cout << "\n";

    return 0;
}
