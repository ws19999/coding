#include <iostream>
#include <algorithm>
using namespace std;
bool check[51];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N,K,table[50],ans=1;
	cin >> N>>K;
	for (int i = 0; i < N; i++)
	{
		cin >> table[i];
	}
	sort(table, table + N);
	for (int i = 0; i < N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (j < table[i] and !check[j])
			{
				ans = 0;
				break;
			}
			if (!check[j] and (j - table[i]) % K == 0)
			{
				check[j] = true;
				break;
			}
		}
		if (!ans)break;
	}
	for (int i = 1; i <= N; i++)
	{
		if (!check[i])
		{
			ans = 0;
			break;
		}
	}
	cout << ans;
	return 0;
}