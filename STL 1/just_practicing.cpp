#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m;
    cin >> n >> m;
    vector <vector<char>> v(n, vector<char>(m, '#'));

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout << v[i][j] <<" ";
        }
        cout << endl;
    }
    return 0;
}