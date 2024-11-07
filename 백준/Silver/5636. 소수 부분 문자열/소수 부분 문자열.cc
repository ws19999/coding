#include <iostream>
using namespace std;
int arr[100001];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	for (int i = 2; i <= 50000; i++)
	{
		if (!arr[i])
		{
			for (int j = i + i; j <= 100000; j += i)arr[j] = 1;
		}
	}
	while (true)
	{
		string str;
		cin >> str;
		if (str == "0")break;
		int len = str.length();
		int answer = 0;
		for (int i = 0; i < len; i++)
		{
			int num = 0;
			for (int j = i; j <= i + 4; j++)
			{
				if (j >= len)break;
				num = num * 10 + str[j] - '0';
				if (!arr[num])answer = max(answer, num);
			}
		}
		cout << answer << "\n";
	}
	return 0;
}