#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int tablea[200000];
int tableb[200000];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	long long ans = 0;
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		cin >> tablea[i];
	}
	for (int i = 0; i < M; i++)
	{
		cin >> tableb[i];
	}
	sort(tablea, tablea + N);
	sort(tableb, tableb + M);
	int j = 0;
	for (int i = N - 1; i >= 0; i--)
	{
		if (j == M)break;
		if (tablea[i] - tableb[j] > 0)
		{
			ans += tablea[i] - tableb[j];
		}
		else break;
		j++;
	}
	cout << ans;
	return 0;
}