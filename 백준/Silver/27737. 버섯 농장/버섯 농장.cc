#include <iostream>
#include <queue>
using namespace std;
int farm[100][100];
int dx[] = { -1,0,1,0 };
int dy[] = { 0,-1,0,1 };
int N, M, K, cnt = 0;
void bfs(int x, int y)
{
	queue<pair<int, int>> 큐;
	큐.push(make_pair(x, y));
	farm[x][y] = 1;
	int 칸 = 1;
	while (!큐.empty())
	{
		x = 큐.front().first;
		y = 큐.front().second;
		큐.pop();
		for (int k = 0; k < 4; k++)
		{
			int nextx = x + dx[k];
			int nexty = y + dy[k];
			if (nextx >= 0 and nextx < N and nexty >= 0 and nexty < N)
			{
				if (!farm[nextx][nexty])
				{
					farm[nextx][nexty] = 1;
					큐.push(make_pair(nextx, nexty));
					칸++;
				}
			}
		}
	}
	cnt += ((칸 - 1) / K) + 1;
}
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> N >> M >> K;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)cin >> farm[i][j];
	}
	queue<pair<int, int>> 큐;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (!farm[i][j])
			{
				bfs(i, j);
			}
		}
	}
	if (cnt > M or cnt==0)cout << "IMPOSSIBLE";
	else cout << "POSSIBLE\n" << M - cnt;
	return 0;
}