#include <iostream>
#include <queue>
using namespace std;
int 지도[52][52],answer=0;
int dx[] = { -1,-1,0,1,1,1,0,-1};
int dy[] = { 0,1,1,1,0,-1,-1,-1};
void island(int x, int y)
{
	answer++;
	queue <pair<int, int>> 큐;
	큐.push(make_pair(x, y));
	지도[x][y] = 0;
	while (!큐.empty())
	{
		int x = 큐.front().first;
		int y = 큐.front().second;
		큐.pop();
		for (int k = 0; k < 8; k++)
		{
			int nextx = x + dx[k];
			int nexty = y + dy[k];
			if (지도[nextx][nexty])
			{
				지도[nextx][nexty] = 0;
				큐.push(make_pair(nextx, nexty));
			}
		}
	}
}
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (true)
	{
		int w, h;
		answer = 0;
		cin >> w >> h;
		if (w == 0 and h == 0)return 0;
		for (int i = 1; i <= h; i++)
		{
			for (int j = 1; j <= w; j++) cin >> 지도[i][j];
		}
		for (int i = 1; i <= h; i++)
		{
			for (int j = 1; j <= w; j++)
			{
				if (지도[i][j])island(i, j);
			}
		}
		cout << answer << "\n";
	}
}