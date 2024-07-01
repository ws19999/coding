#include <iostream>
using namespace std;
int main(void)
{
	long long N, P,Num=1;
	cin >> N >> P;
	for (long long i = 2; i <= N; i++)
	{
		Num *= i;
		Num %= P;
	}
	cout << Num;
}