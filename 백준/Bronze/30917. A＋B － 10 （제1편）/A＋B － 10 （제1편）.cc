#include <iostream>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int A,B;
	for (int i = 1; i <= 9; i++)
	{
		cout << "? A " << i << endl;
		int num;
		cin >> num;
		if (num == 1)
		{
			A = i;
			break;
		}
	}
	for (int i = 1; i <= 9; i++)
	{
		cout << "? B " << i << endl;
		int num;
		cin >> num;
		if (num == 1)
		{
			B = i;
			break;
		}
	}
	cout << "! " << A + B;
	return 0;
}