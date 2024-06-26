#include <iostream>
using namespace std;
long long table[201][201];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int w, h, x, y,temp;
	cin>>w>>h>>x>>y;
	table[0][1] = 1;
	for (int i = 1; i <= x; i++)
	{
		for (int j = 1; j <= y; j++)
		{
			table[i][j] = table[i - 1][j] + table[i][j - 1];
			table[i][j] %= 1000007;
		}
	}
	temp = table[x][y];
	for (int i = x; i <= w; i++)
	{
		for (int j = y; j <= h; j++)
		{
			if (i == x && j == y)table[i][j] = 1;
			else if (i == x)table[i][j] = table[i][j - 1];
			else if (j == y)table[i][j] = table[i - 1][j];
			else
			{
				table[i][j] = table[i - 1][j] + table[i][j - 1];
				table[i][j] %= 1000007;
			}
		}
	}
	cout << (temp * table[w][h]) % 1000007;
	return 0;
}