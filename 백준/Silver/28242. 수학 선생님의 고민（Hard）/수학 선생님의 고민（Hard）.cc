#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	bool calculated = false;
	long long n;
	cin >> n;
	for (long long a = 1; a*a <= n; a++)
	{
		if (n % a)continue;
		long long c = n / a;
		for (long long b = 1; b <= n + 2;b++)
		{
			if (b == 0)continue;
			if ((n + 2) % b==0)
			{
				long long d = -(n + 2) / b;
				if (a * d + c * b == n + 1)
				{
					cout << a << " " << b << " " << c << " " << d;
					calculated = true;
					break;
				}
				else if (a * -d + c * -b == n + 1)
				{
					cout << a << " " << -b << " " << c << " " << -d;
					calculated = true;
					break;
				}
			}
		}
		if (calculated)break;
	}
	if (!calculated)cout << -1;
	return 0;
}