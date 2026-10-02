#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];

void dfs(int src)
{
    // 1.base case
    // 2.kaj kora
   // cout << src << " ";
    vis[src] = true;
    // 3.children ar loop calabo and akta akta kore children niye asbo
    for (int child : adj_list[src])
    {
        if (vis[child] == false) // if the condition is false
            dfs(child);          // dfs ar child gulo k call korbo
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    int cnt = 0;
    for(int i=0; i<n; i++)
    {
        if(vis[i] == false)
        {
            dfs(i);
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}