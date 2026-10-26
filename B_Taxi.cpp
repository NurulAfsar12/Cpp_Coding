#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        sum += x;
    }
    cout << ceil(sum/4.0 )<< endl;
    return 0;
}