#include <iostream>
#include <climits>
using namespace std;
int table[1051];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N, M;
	cin >> N >> M;
	int ans = INT_MAX;
	for (int i = 0; i < M; i++)
	{
		int num;
		cin >> num;
		table[num] = 1;
	}
	for (int x = 1; x <= 1050; x++)
	{
		if (table[x])continue;
		for (int y = 1; y <= 1000; y++)
		{
			if (table[y])continue;
			for (int z = 1; z <= 1000; z++)
			{
				if (table[z])continue;
				ans = min(ans, abs(N - x * y * z));
				if (x * y * z >= N)break;
			}
			if (x * y >= N)break;
		}
		if (ans == 0)break;
	}
	cout << ans;
	return 0;
}