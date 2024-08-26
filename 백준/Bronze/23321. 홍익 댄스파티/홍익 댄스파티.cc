#include <iostream>
using namespace std;
char table[5][10000];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int len;
	for (int i = 0; i < 5; i++)
	{
		string str;
		cin >> str;
		len = str.length();
		for (int j = 0; j < len; j++)
		{
			table[i][j] = str[j];
		}
	}
	for (int j = 0; j < len; j++)
	{
		if (table[2][j] == 'm')
		{
			table[0][j] = 'o';
			table[1][j] = 'w';
			table[2][j] = 'l';
			table[3][j] = 'n';
			table[4][j] = '.';
		}
		else if (table[2][j] == 'l')
		{
			table[0][j] = '.';
			table[1][j] = 'o';
			table[2][j] = 'm';
			table[3][j] = 'l';
			table[4][j] = 'n';
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < len; j++)
		{
			cout << table[i][j];
		}
		cout << "\n";
	}
	return 0;
}