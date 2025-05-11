#include <iostream>
#include <vector>
#include <climits>
#include <queue>
using namespace std;
vector <pair<int,int>> vertex[20001];
int table[20001];
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int V, E,K;
    cin >> V >> E>>K;
    for (int i = 0; i < E; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        vertex[u].push_back(make_pair(v, w));
    }
    fill(table, table + V + 1, INT_MAX);
    priority_queue <pair<int, int>,vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push(make_pair(0, K));
    int dist, vert;
    while (!pq.empty())
    {
        dist = pq.top().first;
        vert = pq.top().second;
        pq.pop();
        if (table[vert] <= dist)continue;
        table[vert] = dist;
        for (auto i : vertex[vert])
        {
            pq.push(make_pair(dist + i.second, i.first));
        }
    }
    for (int i = 1; i <= V; i++)
    {
        if (table[i] == INT_MAX)cout << "INF";
        else cout << table[i];
        cout << "\n";
    }
    return 0;
}