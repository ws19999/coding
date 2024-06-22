#include <iostream>
using namespace std;
int table[1000001];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	for (int num = 1; num <= 1000000; num++)
	{
		int temp = num,a=-1;
		bool down = false;
		bool possible = false;
		while (temp)
		{
			if (down)
			{
				if (a <= temp % 10)
				{
					possible = false;
					break;
				}
			}
			else
			{
				if (a > temp % 10 && a > num % 10)
				{
					down = true;
					possible = true;
				}
				else if (a >= temp % 10)break;
			}
			a = temp % 10;
			temp /= 10;
		}
		if (possible)
		{
			table[num] = table[num - 1] + 1;
		}
		else table[num] = table[num - 1];
	}
	int t;
	cin >> t;
	for (int tc = 1; tc <= t; tc++)
	{
		int a, b;
		cin >> a >> b;
		cout << table[b] - table[a - 1]<<"\n";
	}
	return 0;
}