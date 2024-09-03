#include <iostream>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++)
	{
		bool finished = false;
		string 염색체;
		cin >> 염색체;
		int len = 염색체.length();
		if (염색체[0] > 'F')
		{
			cout << "Good\n";
			continue;
		}
		int pos = 0;
		if (염색체[0] >= 'B')pos++;
		if (염색체[pos] != 'A')
		{
			cout << "Good\n";
			continue;
		}
		while (true)
		{
			if (pos == len)break;
			if (염색체[pos] == 'A')pos++;
			else break;
		}
		if (pos == len)
		{
			cout << "Good\n";
			continue;
		}
		if (염색체[pos] != 'F')
		{
			cout << "Good\n";
			continue;
		}
		while (true)
		{
			if (pos == len)break;
			if (염색체[pos] == 'F')pos++;
			else break;
		}
		if (pos == len)
		{
			cout << "Good\n";
			continue;
		}

		if (염색체[pos] != 'C')
		{
			cout << "Good\n";
			continue;
		}
		while (true)
		{
			if (pos == len)break;
			if (염색체[pos] == 'C')pos++;
			else break;
		}
		if (pos == len)cout << "Infected!\n";
		else if (pos < len - 1)cout << "Good\n";
		else if (염색체[pos] <= 'F')cout << "Infected!\n";
		else cout << "Good\n";
	}
	return 0;
}