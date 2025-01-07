#include <iostream>
#include <unordered_map>
using namespace std;
int table[2][11];
unordered_map<int, pair<int,int>> pos;
unordered_map<int, int> nextpos;
void writescore(int tc, int nextj, int j, int score) {
	if (!table[(tc + 1) % 2][nextj])table[(tc + 1) % 2][nextj] = table[tc % 2][j] + score;
	else table[(tc + 1) % 2][nextj] = min(table[(tc + 1) % 2][nextj], table[tc % 2][j] + score);
}
void check(int tc,int p,int i,int j,int dir) {
	int nextj = nextpos[min(dir, j) * 5 + max(dir, j)];
	if (i == 0) writescore(tc, nextj, p, 2);
	else if (abs(dir - i) == 2) writescore(tc, nextj, p, 4);
	else writescore(tc, nextj, p, 3);
}
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int p = 1,a=0,b=0,tc=0,dir;
	for (int i = 0; i < 4; i++) {
		for (int j = i + 1; j <= 4; j++) {
			pos[p] = make_pair(i, j);
			nextpos[i * 5 + j] = p++;
		}
	}
	while (true) {
		cin >> dir;
		if (dir == 0)break;
		for (int i = 1; i <= 10; i++)table[(tc+1) % 2][i] = 0;
		if (tc == 0)table[1][dir] = 2;
		else {
			for (int j = 1; j <= 10; j++) {
				if (table[tc%2][j]) {
					a = pos[j].first;
					b = pos[j].second;
					if (a == dir or b == dir) writescore(tc, j, j, 1);
					else {
						check(tc, j,a, b,dir);
						check(tc, j,b, a,dir);
					}
				}
			}
		}
		tc++;
	}
	int answer = 4 * tc;
	for (int i = 1; i <= 10; i++) {
		if (table[tc % 2][i])answer = min(answer, table[tc % 2][i]);
	}
	cout << answer;
	return 0;
}