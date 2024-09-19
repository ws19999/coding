#include <iostream>
using namespace std;
int dx[] = { -1,0,1,1 };
int dy[] = { 1,1,1,0 };
int map[20][20];
int dir;
bool finished = false;
void dfs(int depth,int x,int y)
{
	if (depth == 5)
	{
		if (x + dx[dir] < 1 || x + dx[dir]>19 || y + dy[dir] < 1 || y + dy[dir]>19)
		{
			finished = true;
			return;
		}
		else if (map[x][y] != map[x + dx[dir]][y + dy[dir]])
		{
			finished = true;
			return;
		}
		return;
	}
	if (x + dx[dir] >= 1 && x + dx[dir] <= 19 && y + dy[dir] >= 1 && y + dy[dir] <= 19)
	{
		if (map[x][y] == map[x + dx[dir]][y + dy[dir]])dfs(depth + 1, x + dx[dir], y + dy[dir]);
	}
}
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	for (int i = 1; i <= 19; i++)
	{
		for (int j = 1; j <= 19; j++)
		{
			cin >> map[i][j];
		}
	}
	for (int i = 1; i <= 19; i++)
	{
		for (int j = 1; j <= 19; j++)
		{
			if (map[i][j])
			{
				for (dir = 0; dir < 4; dir++)
				{
					if (i - dx[dir] >= 1 && i - dx[dir] <= 19 && j - dy[dir] >= 1 && j - dy[dir] <= 19)
					{
						if (map[i][j] != map[i - dx[dir]][j - dy[dir]])dfs(1, i, j);
					}
					else dfs(1, i, j);
					if (finished)
					{
						cout << map[i][j] << "\n";
						cout << i << " " << j;
						return 0;
					}
				}
			}
		}
	}
	cout << 0;
	return 0;
}