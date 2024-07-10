#include <iostream>
using namespace std;
int table[100000];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N, p, q, r, K=-1,start=1,end=100001;
	long long S;
	cin >> N;
	for (int i = 0; i < N; i++)cin >> table[i];
	cin >> p >> q >> r >> S;
	while (start <= end)
	{
		int mid = (start + end) / 2;
		long long temp = 0;
		for (int i = 0; i < N; i++)
		{
			if (table[i] > mid + r)temp += table[i] - p;
			else if (table[i] < mid)temp += table[i] + q;
			else temp += table[i];
		}
		if (temp < S)start = mid + 1;
		else
		{
			K = mid;
			end = mid - 1;
		}
	}
	cout << K;
	return 0;
}