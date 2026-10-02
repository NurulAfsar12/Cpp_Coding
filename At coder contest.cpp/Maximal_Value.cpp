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
    int cnt = 0;
    for(int i=0; i<n-2; i++)
    {
        if(v[i] < v[i+1] && v[i+1] > v[i+2])
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}