#include <iostream>
#include <climits>
using namespace std;
int table[10000];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, k,ans=0;
	long long start = 0, end = 0;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> table[i];
		if (table[i] > end)end = table[i];
	}
	long long mid;
	while (start <= end)
	{
		mid = (start + end) / 2;
		int cnt = 0;
		if (mid == 0)
		{
			cnt = INT_MAX;
		}
		else {
			for (int i = 0; i < n; i++)
			{
				cnt += table[i] / mid;
			}
		}
		if (cnt >= k)
		{
			start = mid+1;
			ans = mid;
		}
		else
		{
			end = mid-1;
		}
	}
	cout << ans;
	return 0;
}