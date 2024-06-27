#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++)
	{
		int n;
		cin >> n;
		unordered_set<string> numbers;
		bool consistency = true;
		vector<string> vec;
		for (int i = 0; i < n; i++)
		{
			string str;
			cin >> str;
			vec.push_back(str);
		}
		sort(vec.begin(), vec.end());
		for (auto str:vec)
		{
			string num="";
			if (!consistency)break;
			int len = str.length();
			for (int c = 0; c < len; c++)
			{
				num += str[c];
				if (numbers.find(num) == numbers.end())continue;
				else
				{
					consistency = false;
					break;
				}
			}
			numbers.insert(num);
		}
		if (consistency)cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}