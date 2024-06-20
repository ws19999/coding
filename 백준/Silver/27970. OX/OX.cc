#include <iostream>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int pos = 1,ans=0;
	string str;
	cin >> str;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == 'O')
		{
			ans += pos;
			ans %= 1000000007;
		}
		pos *= 2;
		pos %= 1000000007;
	}
	cout << ans;
	return 0;
}