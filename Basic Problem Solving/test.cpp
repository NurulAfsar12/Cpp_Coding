#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m;
    cin >> n >> m;

    char ch = 'A';
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++){
            cout << ch <<" ";
            ch++;
        }
        cout << endl;

    }
    return 0;
}