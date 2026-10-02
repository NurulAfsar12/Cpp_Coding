#include <bits/stdc++.h>
using namespace std;
class Edge
{
public:
    int a, b, c;
    Edge(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};
vector<Edge> edge_list;
long long int dis[1005];
bool cycle = false;
int n;
void bellman_ford()
{
    for (int i = 1; i <= n - 1; i++)
    {
        for (auto ed : edge_list)
        {
            int a = ed.a;
            int b = ed.b;
            int c = ed.c;
            if (dis[a] + c < dis[b] && dis[a] != LLONG_MAX)
            {
                dis[b] = dis[a] + c;
            }
        }
    }

    for (auto ed : edge_list)
    {
        int a = ed.a;
        int b = ed.b;
        int c = ed.c;
        if (dis[a] + c < dis[b] && dis[a] != LLONG_MAX)
        {
            cycle = true;
            break;
        }
    }
}
int main()
{
    int e;
    cin >> n >> e;

    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        edge_list.push_back(Edge(a, b, w));
    }
    for (int i = 1; i <= n; i++)
    {
        dis[i] = LLONG_MAX;
    }
    int src, t;
    cin >> src >> t;
    dis[src] = 0;

    bellman_ford();
    while (t--)
    {
        int d;
        cin >> d;
        if (cycle)
        {
            cout << "Negative Cycle Detected" << endl;
            break;
        }
        else
        {
            if (dis[d] == LLONG_MAX)
            {
                cout << "Not Possible" << endl;
            }
            else
            {
                cout << dis[d] << endl;
            }
        }
    }

    return 0;
}