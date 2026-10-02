#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector <int> v(n);
    map<int,int> mp;
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    int sum = 0;
    for(auto x:mp)
    {
        if(x.second % 2 ==  1)
        {
            sum += x.first;
        }
    }
    cout << sum << endl;
    
    return 0;
}