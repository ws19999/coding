#include <iostream>
using namespace std;
int table[100002];
int answer[100002];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N;
	cin >> N;
	for (int i = 2; i <= N+1; i++)cin >> table[i];
	for (int i = 3; i <= N+1; i++)
	{
		int tempa = 0;
		int tempb = 0;
		if (i == 4 or i >= 6)
		{
			tempa = answer[i - 3];
			int a = table[i - 2];
			int b = table[i - 1];
			int c = table[i];
			while (true)
			{
				if (a == 0 and b == 0 and c == 0)break;
				if ((a % 2 + b % 2 + c % 2) % 2 == 1)tempa++;
				a /= 2;
				b /= 2;
				c /= 2;
			}
		}
		if (i == 3 or i >= 5)
		{
			tempb = answer[i - 2];
			int a = table[i - 1];
			int b = table[i];
			while (true)
			{
				if (a == 0 and b == 0)break;
				if (a % 2 != b % 2)tempb++;
				a /= 2;
				b /= 2;
			}
		}
		answer[i] = max(tempa, tempb);
	}
	cout << answer[N + 1];
	return 0;
}