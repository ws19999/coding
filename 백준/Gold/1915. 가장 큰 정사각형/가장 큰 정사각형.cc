#include <iostream>
using namespace std;
int table[1001][1001];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, m,answer=0;
	char c;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> c;
			if (c == '0')table[i][j] = 0;
			else
			{
				int mins = min(table[i - 1][j - 1], table[i - 1][j]);
				mins = min(mins, table[i][j - 1]);
				table[i][j] = mins + 1;
				answer = max(answer, table[i][j]);
			}
		}
	}
	cout << answer * answer;
	return 0;
}