#include <iostream>
#include <climits>
using namespace std;
int N, table[1001][3][3], houses[1001][3], ans = INT_MAX;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> N;
	for (int i = 0; i < 3; i++)
	{
		cin >> houses[1][i];
		for (int j = 0; j < 3; j++)
		{
			if (i == j)table[1][i][i] = houses[1][i];
			else table[1][i][j] = INT_MAX;
		}
	}
	for (int i = 2; i <= N; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> houses[i][j];
			for (int k = 0; k < 3; k++)
			{
				if (table[i - 1][(j + 1) % 3][k] == INT_MAX && table[i - 1][(j + 2) % 3][k] == INT_MAX)table[i][j][k] = INT_MAX;
				else
				{
					table[i][j][k] = min(table[i - 1][(j + 1) % 3][k], table[i - 1][(j + 2) % 3][k]) + houses[i][j];
					if (i == N && j != k)ans = min(ans, table[i][j][k]);
				}
			}
		}
	}
	cout << ans;
	return 0;
}