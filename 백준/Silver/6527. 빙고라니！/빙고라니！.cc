#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int cnt = 0;
	int words = 0;
	unordered_map<string, int> word;
	int tempword = 0;
	while (true)
	{
		string str;
		cin >> str;
		if (cin.fail())break;
		string temp = "";
		for (auto i : str)
		{
			if (('a' <= i and i <= 'z') or ('A' <= i and i <= 'Z'))temp += tolower(i);
			else if (temp.length())
			{
				if (temp == "bullshit")
				{
					cnt++;
					words += tempword;
					word.clear();
					tempword = 0;
				}
				else
				{
					if (!word[temp])
					{
						word[temp] = 1;
						tempword++;
					}
				}
				temp = "";
			}
		}
		if (temp.length())
		{
			if (temp == "bullshit")
			{
				cnt++;
				words += tempword;
				word.clear();
				tempword = 0;
			}
			else
			{
				if (!word[temp])
				{
					word[temp] = 1;
					tempword++;
				}
			}
			temp = "";
		}
	}
	int p = 2;
	for (int i = cnt; i >= 2; i--)
	{
		if (words % i == 0 and cnt % i == 0)
		{
			words /= i;
			cnt /= i;
		}
	}
	cout << words << " / " << cnt;
	return 0;
}