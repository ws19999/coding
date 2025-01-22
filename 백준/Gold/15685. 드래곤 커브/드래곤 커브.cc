#include <iostream>
#include <vector>
using namespace std;
int table[101][101];
int dx[] = { 1,0,-1,0 }, dy[] = { 0,-1,0,1 };
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N,ans=0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int x, y, d, g,sz=1;
		cin >> x >> y >> d >> g;
		vector<pair<int, int>> vec;
		vec.push_back(make_pair(x, y));
		vec.push_back(make_pair(x + dx[d], y + dy[d]));
		for (int generations = 1; generations <= g; generations++) {
			int sx = vec.back().first;
			int sy = vec.back().second;
			for (int c = sz-1; c >=0; c--) {
				vec.push_back(make_pair(sx + sy - vec[c].second, sy - sx + vec[c].first));
			}
			sz*=2;
		}
		for (auto c : vec) {
			if (c.first >= 0 && c.first <= 100 && c.second >= 0 && c.second <= 100) {
				table[c.first][c.second] = 1;
			}
		}
	}
	for (int i = 1; i <= 100; i++)
	{
		for (int j = 1; j <= 100; j++) {
			if (table[i - 1][j - 1] && table[i - 1][j] && table[i][j - 1] && table[i][j])ans++;
		}
	}
	cout << ans;
	return 0;
}