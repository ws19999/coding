#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool keys['z'+ 1];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N;
	cin >> N;
	cin.ignore();
	for (int option = 0; option < N; option++)
	{
		int 단축키 = -1,첫글자 = 0;
		string str;
		getline(cin, str);
		int len = str.length();
		for (int i = 0; i < len; i++)
		{
			if (str[i] == ' ' or i==len-1)
			{
				if (!keys[tolower(str[첫글자])])
				{
					keys[tolower(str[첫글자])] = true;
					단축키 = 첫글자;
					break;
				}
				첫글자 = i + 1;
			}
		}
		if (단축키 == -1)
		{
			for (int i = 0; i < len; i++)
			{
				if (str[i] != ' ' and !keys[tolower(str[i])] and 단축키 == -1)
				{
					cout << '[' << str[i] << ']';
					단축키 = i;
					keys[tolower(str[i])] = true;
				}
				else cout << str[i];
			}
		}
		else
		{
			for (int j = 0; j < len; j++)
			{
				if (j == 단축키)cout << '[' << str[j] << ']';
				else cout << str[j];
			}
		}
		cout << "\n";
	}
	return 0;
}