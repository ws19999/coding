#include <iostream>
#include <algorithm>
using namespace std;
int N, table[100001];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> N;
	for (int i = 0; i < N; i++)cin >> table[i];
	sort(table, table + N);
	int ans = table[N-1];
	int pos = 0;
	for (int i = 1; i <= table[N - 1]; i++)
	{
		if (table[N-1] > i - 1 + N - pos)
		{
			ans = min(ans, i - 1 + N - pos);
		}
		while (table[pos] == i)pos++;
	}
	cout << ans;
	return 0;
}