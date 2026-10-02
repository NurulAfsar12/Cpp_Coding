 #include <bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];

vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n,m,mn,cnt;

bool valid(int i, int j)
{
    if (i < 0 || j < 0 || i >= n || j >= m)
        return false;
    return true;
}
void dfs(int si, int sj)
{
    
    vis[si][sj] = true;
    cnt++;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) && (!vis[ci][cj]) && grid[ci][cj] == '.')
        {
            dfs(ci, cj);
        }
    }
}

int main()
 {
    cin >> n >> m;
    mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    memset(vis, false, sizeof(vis));
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(!vis[i][j] && grid[i][j] == '.')
            {
                cnt = 0;
                dfs(i,j);
                flag = true;
                mn = min(cnt,mn);
                
            }
        }
        
    }
    if(flag)
    cout << mn << endl;
    else
        cout << "-1" <<endl;
    
    return 0;
}