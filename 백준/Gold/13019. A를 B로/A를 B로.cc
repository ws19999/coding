#include <iostream>
using namespace std;
int chara['Z' - 'A' + 1];
int charb['Z' - 'A' + 1];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string A, B;
	cin >> A >> B;
	int len = A.length();
	for (int i = 0; i < len; i++)
	{
		chara[A[i] - 'A']++;
		charb[B[i] - 'A']++;
	}
	for (int i = 0; i <= 'Z' - 'A'; i++)
	{
		if (chara[i] != charb[i])
		{
			cout << -1;
			return 0;
		}
	}
	int pos = len;
	for (int i = len - 1; i >= 0;i--)
	{
		if (A[i] == B[pos - 1])pos--;
	}
	cout << pos;
	return 0;
}