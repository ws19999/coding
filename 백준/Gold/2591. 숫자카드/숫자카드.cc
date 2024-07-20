#include <iostream>
using namespace std;
int table[40];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string num;
	cin >> num;
	int len = num.length();
	table[0] = 1;
	for (int i = 1; i < len; i++)
	{
		if (num[i] - '0' == 0)
		{
			if (i == 1)table[i] = 1;
			else table[i] = table[i - 2];
		}
		else if ((num[i - 1] - '0' < 3 and num[i-1]-'0'>0) or (num[i - 1] - '0' == 3 and num[i] - '0' <= 4))
		{
			if (i == 1)table[i] = 2;
			else table[i] = table[i - 2] + table[i - 1];
		}
		else table[i] = table[i - 1];
	}
	cout << table[len - 1];
	return 0;
}