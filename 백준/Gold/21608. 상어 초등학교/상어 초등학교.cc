#include <iostream>
using namespace std;
int map[20][20];
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
int table[401][4];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int x, y,n,blank=0,count=0,currentblank,currentcount,ans=0;
	cin >> n;
	int num = n * n;
	while (num--)
	{
		int student;
		cin >> student;
		for (int i = 0; i < 4; i++)cin >> table[student][i];
		blank = -1;
		count = -1;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (map[i][j] != 0)continue;
				currentblank = 0;
				currentcount = 0;
				for (int k = 0; k < 4; k++)
				{
					if (i + dx[k] < 0 || i + dx[k] >= n || j + dy[k] < 0 || j + dy[k] >= n)continue;
					if (map[i + dx[k]][j + dy[k]] == 0) currentblank++;
					else
					{
						for (int l = 0; l < 4; l++)
						{
							if (table[student][l] == map[i + dx[k]][j + dy[k]])
							{
								currentcount++;
								break;
							}
						}
					}
				}
				if (currentcount < count)continue;
				else if (currentcount > count)
				{
					x = i;
					y = j;
					count = currentcount;
					blank = currentblank;
				}
				else if (currentblank < blank)continue;
				else if (currentblank > blank)
				{
					blank = currentblank;
					x = i;
					y = j;
				}
			}
		}
		map[x][y] = student;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int student = map[i][j];
			int cnt = 0;
			for (int k = 0; k < 4; k++)
			{
				if (i + dx[k] < 0 || i + dx[k] >= n || j + dy[k] < 0 || j + dy[k] >= n)continue;
				for (int l = 0; l < 4; l++)
				{
					if (map[i + dx[k]][j + dy[k]] == table[student][l])
					{
						cnt++;
						break;
					}
				}
			}
			if (cnt == 1)ans++;
			else if (cnt == 2) ans += 10;
			else if (cnt == 3) ans += 100;
			else if (cnt == 4) ans += 1000;
		}
	}
	cout << ans;
	return 0;
}