#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    char ch = 'A';
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j>0; j--)
        {
            cout << ch <<" ";
        }
        cout << endl;
    }
    return 0;
}