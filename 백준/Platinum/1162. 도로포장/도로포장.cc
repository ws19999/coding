#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
#include <climits>
using namespace std;
long long N, M, K, ans = LLONG_MAX, table[10001][21];
vector<pair<int, int>> roads[10001];
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> N >> M >> K;
	for (int i = 0; i < M; i++) {
		int a, b, cost;
		cin >> a >> b >> cost;
		roads[a].push_back(make_pair(cost, b));
		roads[b].push_back(make_pair(cost, a));
	}
	for (int i = 1; i <= N; i++) {
		for (int j = 0; j <= 20; j++)table[i][j] = LLONG_MAX;
	}
	table[1][K] = 0;
	priority_queue<tuple<long long,int,int>> pq; //-거리, 남은 포장 수, 도시
	pq.push(make_tuple(0, K, 1));
	while (!pq.empty()) {
		long long dist = -get<0>(pq.top());
		int pave = get<1>(pq.top());
		int city = get<2>(pq.top());
		pq.pop();
		if (dist >= ans)break;
		bool possible = true;
		for (int i = pave+1; i <= K; i++) {
			if (table[city][i] <= dist) {
				possible = false;
				break;
			}
		}
		if (table[city][pave] < dist)possible = false;
		if (!possible)continue;
		for (auto c : roads[city]) {
			possible = true;
			if (pave) {
				for (int j = pave-1; j <= K; j++) {
					if (table[c.second][j] <= dist) {
						possible = false;
						break;
					}
				}
				if (possible) {
					table[c.second][pave - 1] = dist;
					pq.push(make_tuple(-dist, pave - 1, c.second));
					if (c.second == N) {
						ans = min(ans, dist);
					}
				}
				if (table[c.second][pave] > dist + c.first) {
					table[c.second][pave] = dist + c.first;
					pq.push(make_tuple(-dist - c.first, pave, c.second));
				}
			}
			else {
				for (int j = pave; j <= K; j++) {
					if (table[c.second][j] <= dist+c.first) {
						possible = false;
						break;
					}
				}
				if (possible) {
					table[c.second][pave] = dist + c.first;
					pq.push(make_tuple(-dist - c.first, pave, c.second));
					if (c.second == N)ans = min(ans, dist + c.first);
				}
			}
		}
	}
	cout << ans;
	return 0;
}