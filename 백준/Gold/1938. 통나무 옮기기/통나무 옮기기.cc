#include <iostream>
#include <deque>
#include <tuple>
using namespace std;
int dx[] = { -1,0,1,0,-1,-1,1,1}, dy[] = { 0,-1,0,1,-1,1,-1,1 };
char maps[50][50];
int N, sx, sy, sp, dxx, dyy, dp;
int moving() {
	bool check[50][50][2] = { false };
	deque<tuple<int, int, int, int>> dq;
	dq.push_back(make_tuple(sx, sy, sp, 0));
	check[sx][sy][sp] = true;
	while (!dq.empty()) {
		int x = get<0>(dq.front());
		int y = get<1>(dq.front());
		int p = get<2>(dq.front());
		int t = get<3>(dq.front());
		dq.pop_front();
		for (int k = 0; k < 4; k++) {
			int nx=x+dx[k];
			int ny=y+dy[k];
			if (p % 2 == k % 2) {
				nx += dx[k];
				ny += dy[k];
			}
			if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
				if (!check[x + dx[k]][y + dy[k]][p] && maps[nx][ny] != '1') {
					if (p % 2 != k % 2) {
						if (maps[x + dx[p] + dx[k]][y + dy[p] + dy[k]] == '1' || maps[x - dx[p] + dx[k]][y - dy[p] + dy[k]] == '1')continue;
					}
					if (dxx == x + dx[k] && dyy == y + dy[k] && p == dp)return t + 1;
					check[x + dx[k]][y + dy[k]][p] = true;
					dq.push_back(make_tuple(x + dx[k], y + dy[k], p, t + 1));
				}
			}
		}
		bool turnpossible = true;
		for (int k = 0; k < 8; k++) {
			int nx = x + dx[k];
			int ny = y + dy[k];
			if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
				if (maps[nx][ny] == '1') {
					turnpossible = false;
					break;
				}
			}
			else {
				turnpossible = false;
				break;
			}
		}
		if (turnpossible && !check[x][y][1-p]) {
			if (dxx == x && dyy == y && 1-p == dp)return t + 1;
			check[x][y][1 - p] = true;
			dq.push_back(make_tuple(x, y, 1 - p, t + 1));
		}
	}
	return 0;
}
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> maps[i][j];
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 1; j < N - 1; j++) {
			if (maps[i][j - 1] == maps[i][j] && maps[i][j] == maps[i][j + 1]) {
				if (maps[i][j] == 'B') {
					sx = i;
					sy = j;
					sp = 1;
				}
				else if (maps[i][j] == 'E') {
					dxx = i;
					dyy = j;
					dp = 1;
				}
			}
			if (maps[j - 1][i] == maps[j][i] && maps[j + 1][i] == maps[j][i]) {
				if (maps[j][i] == 'B') {
					sx = j;
					sy = i;
					sp = 0;
				}
				else if (maps[j][i] == 'E') {
					dxx = j;
					dyy = i;
					dp = 0;
				}
			}
		}
	}
	cout << moving();
	return 0;
}