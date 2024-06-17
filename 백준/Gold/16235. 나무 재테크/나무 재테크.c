#include <stdio.h>
int dx[8] = { -1,-1,0,1,1,1,0,-1 }, dy[8] = { 0,1,1,1,0,-1,-1,-1 };
typedef struct tree
{
	int age;
}Tree;
typedef struct ground
{
	Tree arr[10000];
	int nut;
	int piece;
}Ground;
Ground map[12][12];
int main(void)
{
	int A[12][12];
	int n, m, p,x,y,z;
	scanf("%d %d %d", &n, &m, &p);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			scanf("%d", &A[i][j]);
			map[i][j].piece = -1;
			map[i][j].nut = 5;
		}
	}
	for (int i = 0; i < m; i++)
	{
		scanf("%d %d %d", &x, &y, &z);
		map[x][y].arr[++map[x][y].piece].age = z;
	}
	while (p--)
	{
		//봄
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				int year = 0;
				for (int k = map[i][j].piece; k >= 0; k--)
				{
					if (map[i][j].nut < map[i][j].arr[k].age)
					{
						for (int l = 0; l <= k; l++)
						{
							year += map[i][j].arr[l].age/2;
						}
						for (int l = k + 1; l <= map[i][j].piece; l++)
						{
							map[i][j].arr[l - k - 1] = map[i][j].arr[l];
						}
						map[i][j].piece -= k + 1;
						break;
					}
					else
					{
						map[i][j].nut -= map[i][j].arr[k].age;
						map[i][j].arr[k].age++;
					}
				}
				//여름
				map[i][j].nut += year;
			}
		}
		//가을
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				for (int k = 0; k <= map[i][j].piece; k++)
				{
					if (map[i][j].arr[k].age % 5 == 0)
					{
						for (int l = 0; l < 8; l++)
						{
							if (i + dx[l] >= 1 && i + dx[l] <= n && j + dy[l] >= 1 && j + dy[l] <= n)
							{
								map[i + dx[l]][j + dy[l]].piece++;
								map[i + dx[l]][j + dy[l]].arr[map[i + dx[l]][j + dy[l]].piece].age = 1;
							}
						}
					}
				}
			}
		}
		//겨울
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				map[i][j].nut += A[i][j];
			}
		}
	}
	int ans = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			ans += map[i][j].piece + 1;
		}
	}
	printf("%d", ans);
}