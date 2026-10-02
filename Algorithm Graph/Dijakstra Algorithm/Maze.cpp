#include <bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool vis[1005][1005];
int level[1005][1005];
vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
pair<int, int> parent[1005][1005];
int n, m;
int si, sj, di, dj;

bool valid(int i, int j)
{
    if (i < 0 || j < 0 || i >= n || j >= m)
        return false;
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    level[si][sj] = 0;

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();

        int par_i = par.first;
        int par_j = par.second;
        for (int i = 0; i < 4; i++)
        {
            int ci = par_i + directions[i].first;
            int cj = par_j + directions[i].second;

            if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] != '#')
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[par_i][par_j] + 1;
                parent[ci][cj] = {par_i, par_j};

                if (grid[ci][cj] == 'D')
                {
                    di = ci;
                    dj = cj;
                }
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 'R')
            {
                si = i;
                sj = j;
            }
        }
    }

    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));

    bfs(si, sj);
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 'D' && vis[i][j])
            {
                found = true;
                di = i;
                dj = j;
            }
        }
    }

    if (found)
    {
        int i = di, j = dj;
        while (!(i == si && j == sj))
        {
            if (grid[i][j] != 'R' && grid[i][j] != 'D')
                grid[i][j] = 'X';

            pair<int, int> p = parent[i][j];
            i = p.first;
            j = p.second;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << grid[i][j];
        }
        cout << endl;
    }
    return 0;
}