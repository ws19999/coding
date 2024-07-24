#include <iostream>
#include <deque>
#include <tuple>
#include <queue>
#include <climits>
using namespace std;
int dx[] = { -1,0,1,0 };
int dy[] = { 0,-1,0,1 };
int W, H,cnt=0,destx,desty;
char maps[100][100];
int check[100][100][2]; //상하, 좌우
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> W >> H;
	priority_queue<tuple<int, int, int, int>> pq;
	for (int i = 0; i < H; i++)
	{
		for (int j = 0; j < W; j++)
		{
			cin >> maps[i][j];
			if (maps[i][j] == 'C' && cnt==0)
			{
				for (int k = 0; k < 4; k++)pq.push(make_tuple(0, k, i, j));
				cnt++;
			}
			else
			{
				check[i][j][0] = INT_MAX;
				check[i][j][1] = INT_MAX;
				if (maps[i][j] == 'C')
				{
					destx = i;
					desty = j;
				}
			}
		}
	}
	while (true)
	{
		cnt = -get<0>(pq.top());
		int dir = get<1>(pq.top());
		int x = get<2>(pq.top());
		int y = get<3>(pq.top());
		if (x == destx and y == desty)
		{
			cout << cnt;
			return 0;
		}
		pq.pop();
		if (check[x][y][dir % 2] < cnt)continue;
		for (int k = 0; k < 4; k++)
		{
			int nextx = x + dx[k];
			int nexty = y + dy[k];
			if (nextx < 0 or nextx >= H or nexty < 0 or nexty >= W)continue;
			if (maps[nextx][nexty] == '*')continue;
			if (dir % 2 == k % 2)
			{
				if (check[nextx][nexty][k % 2] > cnt)
				{
					check[nextx][nexty][k % 2] = cnt;
					pq.push(make_tuple(-cnt, k, nextx, nexty));
				}
			}
			else
			{
				if (check[nextx][nexty][k % 2] > cnt+1)
				{
					check[nextx][nexty][k % 2] = cnt+1;
					pq.push(make_tuple(-(cnt+1), k, nextx, nexty));
				}
			}
		}
	}
	return 0;
}