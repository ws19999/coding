#include <iostream>
using namespace std;
int mod = 1000000007;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N, M, ans = 0;
	long long c = 1, d = 0;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		int a, b;
		cin >> a >> b;
		if (b == 0)
		{
			d += (M - 1) * c;
			d %= mod;
		}
		else
		{
			d = d * (M - 1) + c;
			c*= (M - 1);
			d %= mod;
			c %= mod;
		}
	}
	cout << (c+d)%mod;
	return 0;
}