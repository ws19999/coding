#include <iostream>
using namespace std;
int map[17][17],N,ans=0;
int dx[] = { 0,1,1 };
int dy[] = { 1,1,0 };
void dfs(int x,int y, int dir)
{
	if (x == N && y == N)
	{
		ans++;
		return;
	}
	if (dir == 0)
	{
		if (y + 1 <= N && !map[x][y+1])
		{
			dfs(x, y + 1, 0);
			if (x + 1 <= N && !map[x+1][y+1] && !map[x+1][y])dfs(x + 1, y + 1, 1);
		}
	}
	else if (dir == 1)
	{
		if (y + 1 <= N && !map[x][y+1])dfs(x, y + 1, 0);
		if (x + 1 <= N && !map[x+1][y])dfs(x + 1, y, 2);
		if (x + 1 <= N && y + 1 <= N && !map[x][y+1] && !map[x+1][y] && !map[x+1][y+1])dfs(x + 1, y + 1, 1);
	}
	else if (dir == 2)
	{
		if (x + 1 <= N && !map[x+1][y])
		{
			dfs(x + 1, y, 2);
			if (y + 1 <= N && !map[x][y+1] && !map[x+1][y+1])dfs(x + 1, y + 1, 1);
		}
	}
}
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			cin >> map[i][j];
		}
	}
	dfs(1, 2, 0);
	cout << ans;
	return 0;
}