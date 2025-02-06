#include <iostream>
#include <vector>
#include <deque>
#include <tuple>
#include <queue>
using namespace std;
char univ[1001];
priority_queue<pair<int, int>> pq;
bool check[1001];
vector<pair<int, int>> roads[1001];
int main(void)
{
    int N, M,c=1,cnt=0,dist=0;
    cin >> N >> M;
    for (int i = 1; i <= N; i++)cin >> univ[i];
    for (int i = 0; i < M; i++) {
        int u, v, d;
        cin >> u >> v >> d;
        if (univ[u] == univ[v])continue;
        roads[u].push_back(make_pair(-d, v));
        roads[v].push_back(make_pair(-d, u));
    }
    check[1] = true;
    cnt++;
    for (auto i : roads[1])pq.push(i);
    while (!pq.empty()) {
        if (check[pq.top().second])pq.pop();
        else {
            dist -= pq.top().first;
            int uni = pq.top().second;
            pq.pop();
            for (auto k : roads[uni])pq.push(k);
            check[uni] = true;
            cnt++;
        }
    }
    if (cnt < N)cout << -1;
    else cout << dist;
    return 0;
}