#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        for(char c = 'A' + i; c>='A'; c--)
        {
            cout <<c<<" ";
        }
        cout <<"\n";
    }
    return 0;
}