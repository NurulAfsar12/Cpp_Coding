#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    vector<pair<int, int>> graph[n];
    for (int i = 0; i < e; i++)
    {
        int s, d, w;
        cin >> s >> d >> w;
        graph[s].push_back({d, w});
    }

    int start, target;
    cin >> start >> target;

    priority_queue<pair<int, int>,vector<pair<int, int>>,greater<pair<int, int>>>pq;

    vector<int> cost(n, 1e9);

    cost[start] = 0;
    pq.push({0, start});

    while (!pq.empty())
    {
        int c = pq.top().first;
        int s = pq.top().second;
        pq.pop();

        for (auto x : graph[s])
        {
            int d = x.first;
            int w = x.second;

            if (cost[d] > c + w)
            {
                cost[d] = c + w;
                pq.push({cost[d], d});
            }
        }
    }

    cout << "Minimum Cost = " << cost[target] << endl;

    return 0;
}