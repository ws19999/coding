#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string origin,real;
	getline(cin, origin);
	getline(cin, real);
	int len1 = origin.length(),len2=real.length(),i=0,j=0;
	int table[1001] = { 0 };
	while (i<len1)
	{
		if (origin[i] == real[j])
		{
			table[j] = 1;
			i++;
			j++;
		}
		else j++;
	}
	int ans[200] = { 0 };
	for (i = 0; i < len2; i++)
	{
		if (table[i] == 0)
		{
			ans[real[i] - ' '] = 1;
		}
	}
	for (int i = 0; i < 200; i++)
	{
		if (ans[i] == 1)
		{
			cout << char(i + ' ');
		}
	}
	return 0;
}