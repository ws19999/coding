#include <iostream>
#include <deque>
using namespace std;
int dx[4] = { -1,0,0,1 };
int dy[4] = { 0,-1,1,0 };
int map[20][20];
int visited[20][20];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,m=0,level=2,cnt=0,time=0,x,y;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> map[i][j];
			if (map[i][j] == 9)
			{
				x = i;
				y = j;
				map[i][j] = 0;
			}
			else if (map[i][j])m++;
		}
	}
	while (true)
	{
		//for (int i = 0; i < n; i++)
		//{
			//for (int j = 0; j < n; j++)
			//{
				//cout << map[i][j];
			//}
			//cout << "\n";
		//}
		//cout << x << " " << y <<" lev "<<level<<"cnt "<<cnt << "\n";

		if (m == 0)break;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				visited[i][j] = -1;
			}
		}
		deque <pair<int, int>> dq;
		visited[x][y] = 0;
		dq.push_back(make_pair(x, y));
		bool find = false;
		while (!dq.empty())
		{
			x = dq.front().first;
			y = dq.front().second;
			dq.pop_front();
			if (map[x][y] < level && map[x][y]>0)
			{
				time += visited[x][y];
				while (!dq.empty())
				{
					int tempx = dq.front().first;
					int tempy = dq.front().second;
					if (visited[x][y] != visited[tempx][tempy])break;
					if (map[tempx][tempy] < level && map[tempx][tempy]>0)
					{
						if (tempx < x)
						{
							x = tempx;
							y = tempy;
						}
						else if (tempx == x)
						{
							if (tempy < y)
							{
								y = tempy;
							}
						}
					}
					dq.pop_front();
				}
				cnt++;
				if (cnt == level)
				{
					level++;
					cnt = 0;
				}
				find = true;
				m--;
				map[x][y] = 0;
				break;
			}
			for (int i = 0; i < 4; i++)
			{
				if (x + dx[i] < 0 || x + dx[i] >= n || y + dy[i] < 0 || y + dy[i] >= n)continue;
				if (visited[x + dx[i]][y + dy[i]] >= 0)continue;
				if (map[x + dx[i]][y + dy[i]] <= level)
				{
					visited[x + dx[i]][y + dy[i]] = visited[x][y] + 1;
					dq.push_back(make_pair(x + dx[i], y + dy[i]));
				}
			}
			if (find)break;
		}
		if (!find)break;
	}
	cout << time;
	return 0;
}