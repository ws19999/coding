#include <iostream>
using namespace std;
long long table[200000];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N;
	cin >> N;
	unsigned long long totals = 0,answer=0;
	for (int i = 0; i < N; i++)
	{
		cin >> table[i];
		totals += table[i];
	}
	long long avg = totals / N;
	for (int i = 0; i < N - 1; i++)
	{
		if (table[i] == avg)continue;
		if (table[i] < avg)
		{
			table[i + 1] -= (avg - table[i]);
			answer += avg - table[i];
		}
		else
		{
			table[i + 1] += table[i] - avg;
			answer += table[i] - avg;
		}
	}
	cout << answer;
	return 0;
}