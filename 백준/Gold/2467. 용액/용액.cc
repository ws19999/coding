#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N,table[100000],ans1,ans2,zero=INT_MAX,start=0,end;
	cin >> N;
	for (int i = 0; i < N; i++)cin >> table[i];
	sort(table, table + N);
	end = N - 1;
	while (start < end)
	{
		int temp = abs(table[start] + table[end]);
		if (temp <= zero)
		{
			zero = temp;
			ans1 = table[start];
			ans2 = table[end];
		}
		if (temp > abs(table[start] + table[end - 1]))
		{
			end--;
		}
		else start++;
	}
	cout << ans1 << " " << ans2;
	return 0;
}