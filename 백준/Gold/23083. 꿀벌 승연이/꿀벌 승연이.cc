#include <iostream>
using namespace std;
long long comb[1002][1002];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N,M,K;
	cin >>N>>M>>K;
	for (int i = 0; i < K; i++)
	{
		int x, y;
		cin >> x >> y;
		comb[x][y] = -1;
	}
	comb[0][0] = 1;
	for (int j = 1; j <= M; j++)
	{
		for (int i = 1; i <= N; i++)
		{
			if (comb[i][j] == -1)continue;
			if (j % 2 == 1)
			{
				if (comb[i - 1][j - 1] != -1)comb[i][j] += comb[i - 1][j - 1];
				if (comb[i - 1][j] != -1)comb[i][j] += comb[i - 1][j];
				if (comb[i][j - 1] != -1)comb[i][j] += comb[i][j - 1];
				comb[i][j] %= 1000000007;
			}
			else
			{
				if (comb[i + 1][j - 1] != -1)comb[i][j] += comb[i + 1][j - 1];
				if (comb[i - 1][j] != -1)comb[i][j] += comb[i - 1][j];
				if (comb[i][j - 1] != -1)comb[i][j] += comb[i][j - 1];
				comb[i][j] %= 1000000007;
			}
		}
	}
	cout << comb[N][M];
	return 0;
}