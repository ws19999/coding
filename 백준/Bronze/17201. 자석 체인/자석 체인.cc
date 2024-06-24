#include <iostream>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N,table[10];
	cin >> N;
	bool Magnetic = true;
	string str;
	cin >> str;
	for (int i = 0; i < 2 * N; i++)
	{
		table[i] = str[i] - '0';
		if (i >= 1 && table[i] == table[i - 1])Magnetic = false;
	}
	if (Magnetic)cout << "Yes";
	else cout << "No";
	return 0;
}