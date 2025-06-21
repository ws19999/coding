#include <stdio.h>
#include <stdbool.h>
int miro[502][502];
long long ans[502][502];
char chk[502][502];
int dx[4] = { -1,0,1,0 }, dy[4] = { 0,-1,0,1 };
long long temp = 0;
int n, m;
void back(int a, int b, int c, int d)
{
	if (c == n && d == m)
	{
		ans[a][b]+=1;
		chk[a][b] = 1;
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		if (chk[c + dx[i]][d + dy[i]] != 0 && miro[c][d] > miro[c + dx[i]][d + dy[i]])
		{
			ans[c][d] += ans[c + dx[i]][d + dy[i]];
			continue;
		}
		else if (miro[c][d] > miro[c + dx[i]][d + dy[i]] && chk[c + dx[i]][d + dy[i]] == 0)
		{
			back(c, d, c + dx[i], d + dy[i]);
			ans[c][d]+= ans[c + dx[i]][d + dy[i]];
		}
	}
	chk[c][d] = 1;
}
int main(void)
{
	scanf("%d %d", &n, &m);
	for (int i = 0; i <= n + 1; i++)
	{
		for (int j = 0; j <= m + 1; j++)
		{
			if (i == 0 || i == n + 1 || j == 0 || j == m + 1)
			{
				miro[i][j] = 10001;
			}
			else
			{
				scanf("%d", &miro[i][j]);
			}
		}
	}
	back(0, 0, 1, 1);
	printf("%lld", ans[1][1]);
}