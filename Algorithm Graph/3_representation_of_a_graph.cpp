#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    int adj_mat[n][n];
    vector<int> adj_list[n];
    vector<pair<int, int>> edge_list;
    memset(adj_mat, 0, sizeof(adj_mat));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
                adj_mat[i][j] = 1;
        }
    }

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        adj_mat[a][b] = 1;
        adj_mat[b][a] = 1;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << adj_mat[i][j] <<" ";
        }
        cout << endl;
    }

    while(e--)
    {
        int a,b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    for(int i=0; i<n; i++)
    {
        cout << i << " -> ";
        for(int x : adj_list[i])
        {
            cout << x <<" ";
        }
        cout << endl;
    }

    while(e--)
    {
        int a, b;
        cin >> a >> b;
        edge_list.push_back({a,b});
    }
    for(auto p : edge_list)
    {
        cout << p.first <<" " << p.second << endl;
    }

    return 0;
}