#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >>n;
    vector <int> v(n);
    map<int,int> freq;
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
        freq[v[i]]++;
    }

    int cnt = 0;
    for(auto x:freq)
    {
        cnt = max(cnt,x.second);
    }
    cout << n - cnt << endl;
    return 0;
}