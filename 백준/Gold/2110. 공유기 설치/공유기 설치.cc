#include <iostream>
#include <algorithm>
using namespace std;
int table[200000];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N,C,s=1,e,answer=0;
	cin >> N >> C;
	for (int i = 0; i < N; i++)cin >> table[i];
	sort(table, table + N);
	e = table[N - 1] - table[0];
	while (s <= e)
	{
		int mid = (s + e) / 2;
		int temp = table[0],cnt=1;
		for (int i = 1; i < N; i++)
		{
			if (table[i] - temp >= mid)
			{
				temp = table[i];
				cnt++;
			}
			if (cnt == C)break;
		}
		if (cnt == C)
		{
			answer = mid;
			s = mid + 1;
		}
		else e = mid - 1;
	}
	cout << answer;
	return 0;
}