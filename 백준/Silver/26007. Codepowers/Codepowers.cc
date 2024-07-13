#include <iostream>
using namespace std;
int table[100001];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	long long N, M, K, X,temp;
	cin >> N >> M >> K >> X;
	for (int i = 1; i <= N; i++)
	{
		cin >> temp;
		X += temp;
		if (X < K)table[i] = table[i - 1] + 1;
		else table[i] = table[i - 1];
	}
	for (int i = 0; i < M; i++)
	{
		int l, j;
		cin >> l >> j;
		cout << table[j - 1] - table[l - 1] << "\n";
	}
	return 0;
}