#include <iostream>
using namespace std;
long long gcd(long long a, long long b) {
	while (b != 0) {
		long long temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	long long b,z=0,x,y,temp=0;
	cin >> n >> b;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		temp += x;
		z += y - b;
	}
	if (temp == 0)
	{
		cout << "EZPZ";
	}
	else
	{
		long long divisor = gcd(temp, z);
		temp /= divisor;
		z /= divisor;
		if (temp < 0)
		{
			temp = -temp;
			z = -z;
		}
		if (temp == 1)cout << z;
		else cout << z << "/" << temp;
	}
	return 0;
}