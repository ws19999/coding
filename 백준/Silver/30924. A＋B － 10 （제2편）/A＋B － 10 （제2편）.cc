#include <iostream>
#include <random>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int A=0, B=0; random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dis(1, 10000);

	int random_value = dis(gen);
	for (int i = 1; i < 10000; i++)
	{
		if (i==random_value)continue;
		cout << "? A " << i << endl;
		int num;
		cin >> num;
		if (num == 1)
		{
			A = i;
			break;
		}
	}
	if (A == 0)A = 10000;
	random_value = dis(gen);
	for (int i = 1; i < 10000; i++)
	{
		if (i==random_value)continue;
		cout << "? B " << i << endl;
		int num;
		cin >> num;
		if (num == 1)
		{
			B = i;
			break;
		}
	}
	if (B == 0)B = 10000;
	cout << "! " << A + B;
	return 0;
}