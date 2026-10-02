#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--)
    {
        int x, n;
        cin >> x >> n;
        int p = x/10;
        cout << p * n << endl;
    }
    return 0;
}