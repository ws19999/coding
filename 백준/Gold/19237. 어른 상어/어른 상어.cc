#include <iostream>
using namespace std;
int dx[] = {0, -1,1,0,0 };
int dy[] = { 0,0,0,-1,1 };
int n, m, k;
struct map
{
	bool alive = false;
	int num; 
	int smell;
	int count=0;
};
map maps[20][20];
struct shark
{
	int x, y,dir;
	int table[5][4];
	bool alive = true;
};
shark arr[401];
int sharkcnt,sec=0;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m >> k;
	sharkcnt = m;
	int num;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> num;
			if (num)
			{
				maps[i][j].alive = true;
				maps[i][j].num = num;
				arr[num].x = i;
				arr[num].y = j;
				arr[num].alive = true;
				maps[i][j].smell = num;
				maps[i][j].count = k;
			}
		}
	}
	int dir;
	for (int i = 1; i <= m; i++)
	{
		cin >> dir;
		arr[i].dir = dir;
	}
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= 4; j++)
		{
			for (int k = 0; k < 4; k++)
			{
				cin >> dir;
				arr[i].table[j][k] = dir;
			}
		}
	}
	while (sharkcnt > 1)
	{
		for (int i = 1; i <= m; i++)
		{
			if (!arr[i].alive)continue;
			bool chosen = false;
			for (int d = 0; d < 4; d++)
			{
				if (arr[i].x + dx[arr[i].table[arr[i].dir][d]] < 0 || arr[i].x + dx[arr[i].table[arr[i].dir][d]] >= n || arr[i].y + dy[arr[i].table[arr[i].dir][d]] < 0 || arr[i].y + dy[arr[i].table[arr[i].dir][d]] >= n) continue;
				if (maps[arr[i].x + dx[arr[i].table[arr[i].dir][d]]][arr[i].y + dy[arr[i].table[arr[i].dir][d]]].count == 0)
				{
					dir = arr[i].table[arr[i].dir][d];
					break;
				}
				if (!chosen) 
				{
					if (maps[arr[i].x + dx[arr[i].table[arr[i].dir][d]]][arr[i].y + dy[arr[i].table[arr[i].dir][d]]].count > 0 && maps[arr[i].x + dx[arr[i].table[arr[i].dir][d]]][arr[i].y + dy[arr[i].table[arr[i].dir][d]]].smell == i)
						{
							dir = arr[i].table[arr[i].dir][d];
							chosen = true;
						}
				}
			}
			maps[arr[i].x][arr[i].y].alive = false;
			arr[i].x += dx[dir];
			arr[i].y += dy[dir];
			arr[i].dir = dir;
			if (maps[arr[i].x][arr[i].y].alive)
			{
				arr[i].alive = false;
				sharkcnt--;
				continue;
			}
			maps[arr[i].x][arr[i].y].alive = true;
			maps[arr[i].x][arr[i].y].num = i;
			maps[arr[i].x][arr[i].y].smell = i;
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (maps[i][j].alive)
				{
					maps[i][j].count = k;
				}
				else if (maps[i][j].count > 0)maps[i][j].count--;
			}
		}
		sec++;
		if (sec > 1000)break;
	}
	if (sec > 1000)cout << -1;
	else cout << sec;
	return 0;
}