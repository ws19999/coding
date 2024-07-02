#include <iostream>
#include <climits>
using namespace std;
long long table[1000000];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	long long N, M, end = 0, start = 0, ans = 0;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		cin >> table[i];
		end = max(end, table[i]);
	}
	while (start <= end)
	{
		long long mid = (start + end) / 2;
		long long temp = 0;
		for (int i = 0; i < N; i++)
		{
			if (table[i] >= mid)temp += table[i] - mid;
		}
		if (temp >= M)
		{
			ans = mid;
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
	}
	cout << ans;
	return 0;
}