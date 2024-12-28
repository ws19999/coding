#include <iostream>
#include <deque>
using namespace std;
int dx[9] = { 0,0,-1,-1,-1,0,1,1,1 };
int dy[9] = { 0,-1,-1,0,1,1,1,0,-1 };
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int map[50][50] = { 0 };
	int cloudmap[50][50] = { 0 };
	int table[100][2];
	int n, m, current, before = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> map[i][j];
		}
	}
	for (int i = 0; i < m; i++)
	{
		cin >> table[i][0] >> table[i][1];
	}
	deque <pair<int, int>> dq;
	dq.push_back(make_pair(n - 1, 0));
	cloudmap[n - 1][0] = 1;
	dq.push_back(make_pair(n - 1, 1));
	cloudmap[n - 1][1] = 1;
	dq.push_back(make_pair(n - 2, 0));
	cloudmap[n - 2][0] = 1;
	dq.push_back(make_pair(n - 2, 1));
	cloudmap[n - 2][1] = 1;
	current = 4;
	for (int i = 0; i < m; i++)
	{
		for (int k = 0; k < current; k++)
		{
			cloudmap[dq[k].first][dq[k].second] -= 1;
			dq[k].first += dx[table[i][0]] * table[i][1];
			dq[k].second += dy[table[i][0]] * table[i][1];
			dq[k].first = (dq[k].first + 50 * n) % n;
			dq[k].second = (dq[k].second + 50 * n) % n;
			cloudmap[dq[k].first][dq[k].second] += 1;
			map[dq[k].first][dq[k].second] += 1;
		}
		for (int k = 0; k < current; k++)
		{
			int r = dq[k].first;
			int c = dq[k].second;
			int cnt = 0;
			for (int j = 2; j <= 8; j += 2)
			{
				if (r + dx[j] < 0 || r + dx[j] >= n || c + dy[j] < 0 || c + dy[j] >= n)continue;
				if (map[r + dx[j]][c + dy[j]] >= 1)cnt++;
			}
			map[r][c] += cnt;
		}
		before = current;
		current = 0;
		for (int r = 0; r < n; r++)
		{
			for (int c = 0; c < n; c++)
			{
				if (map[r][c] >= 2 && cloudmap[r][c] == 0)
				{
					map[r][c] -= 2;
					cloudmap[r][c] += 1;
					dq.push_back(make_pair(r, c));
					current++;
				}
			}
		}
		while (before--)
		{
			cloudmap[dq.front().first][dq.front().second] = 0;
			dq.pop_front();
		}
	}
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			ans += map[i][j];
		}
	}
	cout << ans;
	return 0;
}