#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,k;
    cin >> n >> k;
    int cnt = 0;
    for(int i=n; i>=1; i--)
    {
        cnt++;
        if(i==k)
        {
            break;
        }
    }
    cout << cnt << endl;
    return 0;
}