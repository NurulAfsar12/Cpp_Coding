#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a;
    vector <long long> v;
    while(cin >> a)
    {
        v.push_back(a);
    }
    cout << fixed << setprecision(4);
    for(int i=v.size()-1; i>=0; i--)
    {
        cout << sqrt((double)v[i]) << endl;
    }
    return 0;
}