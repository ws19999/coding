#include <iostream>
#include <vector>
#include <deque>
#include <queue>
#include <climits>
using namespace std;
vector<pair<int, int>> friendship[20];
int table[20],M;
bool visited[20];
bool found = false;
deque<int> ans;
void dijkstra() {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    table[0] = 0;
    pq.push(make_pair(0, 0));
    while (!pq.empty()) {
        int dist = pq.top().first;
        int politician = pq.top().second;
        pq.pop();
        for (auto i : friendship[politician]) {
            if (table[i.second] > i.first + dist) {
                i.first += dist;
                table[i.second] = i.first;
                pq.push(i);
            }
        }
    }
}
void dfs(int num,int dist) {
    visited[num] = true;
    if (num == M - 1 && dist == table[M - 1]) {
        found = true;
        ans.push_front(num);
        visited[num] = false;
        return;
    }
    for (auto i : friendship[num]) {
        if (i.first + dist > table[M - 1])continue;
        if (visited[i.second])continue;
        dfs(i.second, dist + i.first);
        if (found) {
            ans.push_front(num);
            visited[num] = false;
            return;
        }
    }
    visited[num] = false;
}
int main(void)
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; tc++) {
        ans.clear();
        found = false;
        cout << "Case #" << tc << ": ";
        int N;
        cin >> N >> M;
        for (int i = 0; i < M; i++) {
            table[i] = INT_MAX;
            friendship[i].clear();
        }
        for (int i = 0; i < N; i++) {
            int x, y, z;
            cin >> x >> y >> z;
            friendship[x].push_back(make_pair(z, y));
            friendship[y].push_back(make_pair(z, x));
        }
        dijkstra();
        if (table[M - 1] == INT_MAX)cout << -1 << "\n";
        else {
            dfs(0,0);
            for (auto i : ans)cout << i << " ";
            cout << "\n";
        }
    }
    return 0;
}