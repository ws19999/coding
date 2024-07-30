#include <iostream>
using namespace std;
int dx[9] = { 0,-1,-1,0,1,1,1,0,-1 };
int dy[9] = { 0,0,-1,-1,-1,0,1,1,1 };
struct fish
{
	bool alive;
	int x, y,dir;
};
struct space
{
	bool alive;
	int num;
};
int tempans = 0;
int ans=0;
void dfs(space map[4][4], fish arr[17])
{
	space maps[4][4];
	fish arrs[17];
	for (int i = 1; i <= 16; i++)
	{
		if (arr[i].alive)
		{
			int x = arr[i].x;
			int y = arr[i].y;
			int dir = arr[i].dir;
			while (true)
			{
				if (x + dx[dir] < 0 || x + dx[dir] >= 4 || y + dy[dir] < 0 || y + dy[dir] >= 4) dir++;
				else if (map[x + dx[dir]][y + dy[dir]].alive == false)
				{
					map[x][y].alive = false;
					x += dx[dir];
					y += dy[dir];
					arr[i].x = x;
					arr[i].y = y;
					arr[i].dir = dir;
					map[x][y].alive = true;
					map[x][y].num = i;
					break;
				}
				else if (map[x + dx[dir]][y + dy[dir]].num == 0) dir++;
				else
				{
					int num = map[x + dx[dir]][y + dy[dir]].num;
					arr[i].dir = dir;
					map[x + dx[dir]][y + dy[dir]].num = i;
					map[x][y].num = num;
					arr[i].x = x + dx[dir];
					arr[i].y = y + dy[dir];
					arr[num].x = x;
					arr[num].y = y;
					break;
				}
				dir = (dir - 1) % 8 + 1;
				if (dir == arr[i].dir)break;
			}
		}
	}
		int x = arr[0].x;
		int y = arr[0].y;
		int dir = arr[0].dir;
		for (int i = 1; i <= 3; i++)
		{
			if (x + dx[dir] * i < 0 || x + dx[dir] * i >= 4 || y + dy[dir] * i < 0 || y + dy[dir] * i >= 4)break;
			for (int j = 0; j < 4; j++)
			{
				for (int k = 0; k < 4; k++)
				{
					maps[j][k] = map[j][k];
				}
			}
			for (int k = 0; k <= 16; k++) arrs[k] = arr[k];
			if (maps[x + dx[dir] * i][y + dy[dir] * i].alive == false) continue;
			int num = maps[x + dx[dir] * i][y + dy[dir] * i].num;
			arrs[0].x = x + dx[dir] * i;
			arrs[0].y = y + dy[dir] * i;
			arrs[num].alive = false;
			maps[x + dx[dir] * i][y + dy[dir] * i].num = 0;
			maps[x][y].alive = false;
			tempans += num;
			ans = max(ans, tempans);
			arrs[0].dir = arrs[num].dir;
			dfs(maps, arrs);
			tempans -= num;
		}
	}
int main(void){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	space map[4][4];
	fish arr[17]; //상어 0번
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			map[i][j].alive = true;
			int num, dir;
			cin >> num >> dir;
			map[i][j].num = num;
			arr[num].x = i;
			arr[num].y = j;
			arr[num].dir = dir;
			arr[num].alive = true;
		}
	}
	tempans += map[0][0].num;
	arr[map[0][0].num].alive = false;
	arr[0].alive = true;
	arr[0].x = 0;
	arr[0].y = 0;
	arr[0].dir = arr[map[0][0].num].dir;
	map[0][0].num = 0;
	dfs(map,arr);
	cout << ans;
	return 0;
}