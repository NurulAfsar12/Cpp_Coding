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
    sort(v.begin(), v.end());
    int k = 1;
    int cnt = 0;
    for(int i=0; i<n; i++)
    {
        if(v[i] >= k)
        {
            k++;
            cnt++;
        }
        else
            continue;
        
    }
    cout << cnt << endl;
    return 0;
}