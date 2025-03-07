#include <iostream>
#include <algorithm>
using namespace std;
long long table[300000], ans = 0;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++)cin >> table[i];
	sort(table, table + n);
	for (int i = 0; i < n; i++)
	{
		if (i < k)ans += table[i] * i;
		else ans += table[i] * k;
	}
	cout << ans;
	return 0;
}