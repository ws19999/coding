#include <iostream>
using namespace std;
int primes[1000001];
int a2b2[1000001];
bool notprime[1000001];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	for (int i = 2; i <= 1000000; i++)
	{
		if (!notprime[i])
		{
			for (int j = i + i; j <= 1000000; j += i)notprime[j] = true;
		}
		if (!notprime[i])
		{
			primes[i] = primes[i - 1] + 1;
			if (i % 4 == 1)a2b2[i] = a2b2[i - 1] + 1;
			else a2b2[i] = a2b2[i - 1];
		}
		else
		{
			primes[i] = primes[i - 1];
			a2b2[i] = a2b2[i - 1];
		}
        if(i==2)a2b2[i]++;
	}
	while (true)
	{
		int L, U;
		cin >> L >> U;
		if (L == -1 and U == -1)break;
		cout << L << " " << U << " ";
		if (L <= 0)L = 1;
		if (U <= 0)U = 1;
		cout << primes[U] - primes[L - 1] << " " << a2b2[U] - a2b2[L - 1]<<"\n";
	}
	return 0;
}