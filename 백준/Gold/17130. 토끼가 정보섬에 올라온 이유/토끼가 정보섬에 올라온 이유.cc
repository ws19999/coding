#include <iostream>
#include <deque>
using namespace std;
char island[1002][1002];
int ans[1002][1002],answer=-1;
int dx[] = { -1,0,1 };
bool check[1002][1002];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N, M;
	cin >> N >> M;
	deque<pair<int, int>> dq;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> island[i][j];
			if (island[i][j] == 'R')
			{
				dq.push_back(make_pair(i, j));
				check[i][j] = true;
			}
		}
	}
	while (!dq.empty())
	{
		int x = dq.front().first;
		int y = dq.front().second;
		dq.pop_front();
		if (island[x][y] == 'O')answer = max(answer, ans[x][y]);
		if (y == M - 1)continue;
		for (int k = 0; k < 3; k++)
		{
			int nextx = x + dx[k];
			if (nextx < 0 or nextx >= N)continue;
			if (island[nextx][y + 1] == '#')continue;
			if (!check[nextx][y + 1])
			{
				check[nextx][y + 1] = true;
				dq.push_back(make_pair(nextx, y + 1));
			}
			int temp = ans[x][y];
			if (island[nextx][y + 1] == 'C')temp++;
			ans[nextx][y + 1] = max(ans[nextx][y + 1], temp);
		}
	}
	cout << answer;
	return 0;
}