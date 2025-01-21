#include <iostream>
#include <deque>
#include <vector>
#include <string>
using namespace std;
string building[100];
char visited[100][100];
int dx[] = { -1,0,1,0 }, dy[] = { 0,-1,0,1 },ans=0;
deque<pair<int, int>> dq;
bool keys['z' - 'a' + 1] = { false };
vector<pair<int, int>> doors['Z' - 'A' + 1];
void checks(int x, int y) {
	char nc = building[x][y];
	visited[x][y] = true;
	if (nc == '.') {
		dq.push_back(make_pair(x, y));
	}
	else if (nc >= 'A' && nc <= 'Z') {
		if (keys[nc - 'A']) {
			dq.push_back(make_pair(x, y));
		}
		else {
			doors[nc - 'A'].push_back(make_pair(x, y));
		}
	}
	else if (nc >= 'a' && nc <= 'z') {
		keys[nc - 'a'] = true;
		for (auto i : doors[nc - 'a']) {
			dq.push_back(i);
		}
		doors[nc - 'a'].clear();
		dq.push_back(make_pair(x, y));
	}
	else if (nc == '$') {
		dq.push_back(make_pair(x, y));
		ans++;
	}
}
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		dq.clear();
		for (int a = 0; a <= 'z' - 'a'; a++) {
			keys[a] = false;
			doors[a].clear();
		}
		int h, w;
		ans = 0;
		cin >> h >> w;
		deque<pair<int, int>> candidates;
		for (int i = 0; i < h; i++) {
			cin >> building[i];
			for (int j = 0; j < w; j++) {
				visited[i][j] = false;
				if ((i == 0 || i == h - 1 || j == 0 || j == w - 1) && building[i][j] != '*') {
					candidates.push_back(make_pair(i, j));
				}
			}
		}
		string havekeys;
		cin >> havekeys;
		if (havekeys != "0") {
			for (auto c : havekeys) {
				keys[c - 'a']=true;
			}
		}
		while (!candidates.empty()) {
			int x = candidates.front().first;
			int y = candidates.front().second;
			candidates.pop_front();
			checks(x, y);
		}
		while (!dq.empty()) {
			int x = dq.front().first;
			int y = dq.front().second;
			dq.pop_front();
			for (int k = 0; k < 4; k++) {
				int nx = x + dx[k];
				int ny = y + dy[k];
				if (nx >= 0 && nx < h && ny >= 0 && ny < w) {
					if (visited[nx][ny])continue;
					checks(nx, ny);
				}
			}
		}
		cout << ans << "\n";
	}
	return 0;
}