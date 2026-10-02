#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector <int> v(n);
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    int l = 0;
    int ans = INT_MAX;
    for(int i=0; i<n-1; i++)
    {
        l += v[i];
        int r = sum - l;
        int dif = abs(l - r);
        ans = min(ans, dif);
    }
    cout << ans << endl;
    return 0;
}