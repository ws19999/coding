#include <iostream>
using namespace std;
int mapa[20][20];
int dx[] = { 0,0,0,-1,1 };
int dy[] = { 0,1,-1,0,0 };
int up = 0, down = 0, l = 0, r = 0, f = 0, b = 0;
void moved(int d) {
	int temp=up;
	if (d == 1) {
		up = l;
		l = down;
		down = r;
		r = temp;
	}
	else if (d == 2) {
		up = r;
		r = down;
		down = l;
		l = temp;
	}
	else if (d == 3) {
		up = b;
		b = down;
		down = f;
		f = temp;
	}
	else {
		up = f;
		f = down;
		down = b;
		b = temp;
	}
}
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int x, y, N, M, K;
	cin >> N >> M >> x >> y >> K;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> mapa[i][j];
		}
	}
	
	for (int k = 1; k <= K; k++) {
		int dir;
		cin >> dir;
		int nextx = x + dx[dir];
		int nexty = y + dy[dir];
		if (nextx >= 0 and nextx < N and nexty >= 0 and nexty < M) {
			x = nextx;
			y = nexty;
			moved(dir);
			cout << up<<"\n";
			if (!mapa[x][y])mapa[x][y] = down;
			else {
				down = mapa[x][y];
				mapa[x][y] = 0;
			}
		}
	}
	return 0;
}