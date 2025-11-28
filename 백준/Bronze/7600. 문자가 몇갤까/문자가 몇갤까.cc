#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (true)
	{
		string str;
		getline(cin, str);
		if (str == "#")break;
		int table[26] = { 0 },ans=0;
		for (int i = 0; i < str.length(); i++)
		{
			if (isupper(str[i]))
			{
				str[i] = char(str[i] + 32);
			}
			if (str[i] - 97 < 0 || str[i] - 97 > 25)continue;
			else if (table[str[i] - 97] == 0)
			{
				ans++;
				table[str[i] - 97] = 1;
			}
		}
		cout << ans << "\n";
	}
	return 0;
}