#include <iostream>
using namespace std;
string table[200];
int b[200][200];
int dx[] = { -1,0,1,0 };
int dy[] = { 0,-1,0,1 };
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int R, C,N;
	cin >> R >> C>>N;
	for (int i = 0; i < R; i++)cin >> table[i];
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			if (table[i][j] == 'O')b[i][j] = 1;
		}
	}
	for (int t = 3; t <= N + 1; t++) {
		if (t % 2 == 1) {
			for (int i = 0; i < R; i++) {
				for (int j = 0; j < C; j++) {
					if (b[i][j] != t-2)b[i][j] = t;
					table[i][j] = 'O';
				}
			}
		}
		else {
			for (int i = 0; i < R; i++) {
				for (int j = 0; j < C; j++) {
					if (b[i][j] == t - 3) {
						table[i][j] = '.';
						for (int k = 0; k < 4; k++) {
							int nextx = i + dx[k];
							int nexty = j + dy[k];
							if (nextx >= 0 and nextx < R and nexty >= 0 and nexty < C) {
								if (b[nextx][nexty] == t - 1)b[nextx][nexty] = 0;
								table[nextx][nexty] = '.';
							}
						}
					}
				}
			}
		}
	}
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			cout << table[i][j];
		}
		cout << "\n";
	}
	return 0;
}