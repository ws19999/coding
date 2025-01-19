#include <iostream>
#include <list>
#include <deque>
using namespace std;
typedef struct cheese {
	int x, y;
}Cheese;
deque<Cheese> q;
list<Cheese> cheeses;
int dx[] = { -1,0,1,0 }, dy[] = { 0,-1,0,1 };
int cheesemap[100][100];
void findout(int N,int M) {
	for (Cheese c:q)cheesemap[c.x][c.y] = -1;
	while (!q.empty()) {
		Cheese c = q.front();
		q.pop_front();
		for (int k = 0; k < 4; k++) {
			int nx = c.x+dx[k];
			int ny = c.y+dy[k];
			if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
				if (cheesemap[nx][ny] == 0) {
					cheesemap[nx][ny] = -1;
					Cheese nc;
					nc.x = nx;
					nc.y = ny;
					q.push_back(nc);
				}
			}
		}
	}
}
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> cheesemap[i][j];
		}
	}
	Cheese a;
	a.x = 0;
	a.y = 0;
	q.push_back(a);
	findout(N,M);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (cheesemap[i][j]) {
				int cnt = 0;
				for (int k = 0; k < 4; k++) {
					int nx = i + dx[k];
					int ny = j + dy[k];
					if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
						if (cheesemap[nx][ny] == -1)cnt++;
					}
				}
				Cheese c;
				c.x = i;
				c.y = j;
				if (cnt >= 2) {
					q.push_back(c);
				}
				else {
					cheeses.push_back(c);
				}
			}
		}
	}
	if (q.empty()) {
		cout << 0;
		return 0;
	}
	int t = 1;
	while (!cheeses.empty()){
		t++;
		findout(N, M);
		auto it = cheeses.begin();
		while (it != cheeses.end()) {
			int cnt = 0;
			for (int k = 0; k < 4; k++) {
				int nx = (*it).x + dx[k];
				int ny = (*it).y + dy[k];
				if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
					if (cheesemap[nx][ny] == -1)cnt++;
				}
			}
			if (cnt >= 2) {
				q.push_back(*it);
				cheeses.erase(it++);
			}
			else it++;
		}
	}
	cout << t;
	return 0;
}