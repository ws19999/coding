#include <iostream>
#include <queue>
#include <tuple>
#include <climits>
using namespace std;
int dx[] = { -1,0,1,0 }, dy[] = { 0,-1,0,1 };
int mapa[501][501],dist[501][501];
void make_map(int t,int s) {
	for (int i = 0; i < s; i++)
	{
		int X1, Y1, X2, Y2;
		cin >> X1 >> Y1 >> X2 >> Y2;
		for (int i = min(X1, X2); i <= max(X1, X2); i++) {
			for (int j = min(Y1, Y2); j <= max(Y1, Y2); j++) {
				mapa[i][j] = t;
			}
		}
	}
}
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	for (int i = 0; i <= 500; i++) {
		for (int j = 0; j <= 500; j++)dist[i][j] = INT_MAX;
	}
	dist[0][0] = 0;
	int N,M;
	cin >> N;
	make_map(1, N);
	cin >> M;
	make_map(2, M);
	priority_queue<tuple<int, int, int>> pq;
	pq.push(make_tuple(0, 0, 0));
	while (!pq.empty()) {
		int t = -get<0>(pq.top());
		int x = get<1>(pq.top());
		int y = get<2>(pq.top());
		pq.pop();
		if (t < dist[x][y])continue;
		for (int k = 0; k < 4; k++) {
			int nx = x + dx[k];
			int ny = y + dy[k];
			if (nx >= 0 && nx <= 500 && ny >= 0 && ny <= 500) {
				if (mapa[nx][ny] == 2)continue;
				if (mapa[nx][ny] == 1) {
					if (dist[nx][ny] <= t + 1)continue;
					dist[nx][ny] = t + 1;
					pq.push(make_tuple(-t - 1, nx, ny));
				}
				else {
					if (dist[nx][ny] <= t)continue;
					dist[nx][ny] = t;
					pq.push(make_tuple(-t, nx, ny));
				}
			}
			if (nx == 500 && ny == 500) {
				cout << dist[nx][ny];
				return 0;
			}
		}
	}
	cout << -1;
	return 0;
}