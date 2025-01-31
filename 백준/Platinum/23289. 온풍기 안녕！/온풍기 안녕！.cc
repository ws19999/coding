#include <iostream>
#include <deque>
#include <vector>
#include <tuple>
using namespace std;
int R, C;
int dx[] = { -1,0,1,0}, dy[] = { 0,1,0,-1};
struct heater {
	int x, y, dir;
};
vector<heater> heaters;
vector<pair<int, int>> checkpoints;
int house[21][21];
int walls[21][21];
void tempup(int x, int y, int dir) {
	int nx, ny;
	deque<tuple<int, int, int>> dq;
	bool visited[21][21] = { false };
	visited[x][y] = true;
	house[x][y] += 5;
	dq.push_back(make_tuple(x, y, 4));
	while (!dq.empty()) {
		x = get<0>(dq.front());
		y = get<1>(dq.front());
		int num = get<2>(dq.front());
		dq.pop_front();
		nx = x + dx[dir] + dx[(dir + 3) % 4];
		ny = y + dy[dir] + dy[(dir + 3) % 4];
		if (nx >= 1 && nx <= R && ny >= 1 && ny <= C) {
			if (!visited[nx][ny] && !(walls[x][y] & (1<<((dir + 3) % 4))) && !(walls[x + dx[(dir + 3) % 4]][y + dy[(dir + 3) % 4]] & (1<< dir))) {
				visited[nx][ny] = true;
				house[nx][ny] += num;
				if (num)dq.push_back(make_tuple(nx, ny, num - 1));
			}
		}
		nx = x + dx[dir];
		ny = y + dy[dir];
		if (nx >= 1 && nx <= R && ny >= 1 && ny <= C) {
			if (!visited[nx][ny] && !(walls[x][y] & (1<<dir))) {
				visited[nx][ny] = true;
				house[nx][ny] += num;
				if (num)dq.push_back(make_tuple(nx, ny, num - 1));
			}
		}
		nx = x + dx[dir] + dx[(dir + 1) % 4];
		ny = y + dy[dir] + dy[(dir + 1) % 4];
		if (nx >= 1 && nx <= R && ny >= 1 && ny <= C) {
			if (!visited[nx][ny] && !(walls[x][y] & (1 << ((dir + 1) % 4))) && !(walls[x + dx[(dir + 1) % 4]][y + dy[(dir + 1) % 4]] & (1 << dir))) {
				visited[nx][ny] = true;
				house[nx][ny] += num;
				if (num)dq.push_back(make_tuple(nx, ny, num - 1));
			}
		}
	}
}
void wind() {
	for (auto machine : heaters) {
		int x = machine.x+dx[machine.dir];
		int y = machine.y+dy[machine.dir];
		int dir = machine.dir;
		tempup(x, y, dir);
	}
}
void tempcontrol() {
	int changes[21][21] = { 0 };
	for (int i = 1; i <= R; i++) {
		for (int j = 1; j <= C; j++) {
			int temp = house[i][j];
			for (int k = 0; k < 4; k++) {
				if (walls[i][j] & 1 << k)continue;
				int nx = i + dx[k];
				int ny = j + dy[k];
				if (nx >= 1 && nx <= R && ny >= 1 && ny <= C) {
					int t = house[nx][ny];
					if (t > temp) {
						changes[i][j] += (t - temp) / 4;
					}
					else if (t < temp) {
						changes[i][j] -= (temp-t) / 4;
					}
				}
			}
		}
	}
	for (int i = 1; i <= R; i++) {
		for (int j = 1; j <= C; j++) {
			house[i][j] += changes[i][j];
		}
	}
}
void tempchanges() {
	int x = 1, y = 1, dir = 1;
	for (int cnt = 1; cnt <= 2 * R + 2 * C - 4; cnt++) {
		if(house[x][y])house[x][y]--;
		x += dx[dir];
		y += dy[dir];
		if (x <= 0 || x > R || y <= 0 || y > C) {
			x -= dx[dir];
			y -= dy[dir];
			dir = (dir + 1) % 4;
			x += dx[dir];
			y += dy[dir];
		}
	}
}
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int K, W;
	cin >> R >> C >> K;
	for (int i = 1; i <= R; i++) {
		for (int j = 1; j <= C; j++) {
			int num;
			cin >> num;
			if (1<=num && num<=4) {
				heater machine;
				machine.x = i;
				machine.y = j;
				if (num == 1) machine.dir = 1;
				else if (num == 2) machine.dir = 3;
				else if (num == 3)machine.dir = 0;
				else machine.dir = 2;
				heaters.push_back(machine);
			}
			else if (num == 5) {
				checkpoints.push_back(make_pair(i, j));
			}
		}
	}
	cin >> W;
	for (int i = 0; i < W; i++) {
		int x, y, t;
		cin >> x >> y >> t;
		if (t == 0) {
			walls[x][y] += 1;
			walls[x - 1][y] += 4;
		}
		else {
			walls[x][y] += 2;
			walls[x][y + 1] += 8;
		}
	}
	for (int tests = 1; tests <= 101; tests++) {
		wind();
		tempcontrol();
		tempchanges();
		bool finished = true;
		for (auto p : checkpoints) {
			if (house[p.first][p.second] < K) {
				finished = false;
				break;
			}
		}
		if (finished) {
			cout << tests;
			return 0;
		}
	}
	cout << 101;
	return 0;
}