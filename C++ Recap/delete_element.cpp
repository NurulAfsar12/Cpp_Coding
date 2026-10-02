#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    int idx;
    cin >> idx;
    // vector<int> a;
    // for(int i=0; i<n; i++)
    // {
    //     if(i == idx)
    //     {
    //         continue;
    //     }
    //     else
    //         a.push_back(v[i]);
    // }
    for(int i=idx; i<n-1; i++)
    {
        v[i] = v[i+1];
    }
    for(int i=0; i<n-1; i++)
    {
        cout << v[i] <<" ";
    }
    return 0;
}