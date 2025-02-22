#include <iostream>
using namespace std;
int table[10001];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N, K, maxw = 0, ans = 0, T, I;
	cin >> N>>K;
	for (int i = 0; i < K; i++)
	{
		cin >> I >> T;
		for (int w = maxw; w >= 0; w--)
		{
			if (w + T <= N)
			{
				maxw = max(maxw, w + T);
				table[w + T] = max(table[w + T], table[w] + I);
				ans = max(ans, table[w + T]);
			}
		}
	}
	cout << ans;
	return 0;
}