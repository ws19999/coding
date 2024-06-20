#include <iostream>
#include <unordered_map>
using namespace std;
int table[2000];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	unordered_map<int,pair<int,int>> maps;
	int N,ans=0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> table[i];
		maps[table[i]].first++;
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (maps[table[i] + table[j]].first && !maps[table[i] + table[j]].second)
			{
				if (table[i] == 0 && table[j] == 0)
				{
					if (maps[0].first >= 3)
					{
						ans += maps[0].first;
						maps[0].second = 1;
					}
				}
				else if (table[i] == 0)
				{
					if (maps[table[j]].first > 1)
					{
						ans += maps[table[j]].first;
						maps[table[j]].second = 1;
					}
				}
				else if (table[j] == 0)
				{
					if (maps[table[i]].first > 1)
					{
						ans += maps[table[i]].first;
						maps[table[i]].second = 1;
					}
				}
				else
				{
					ans += maps[table[i] + table[j]].first;
					maps[table[i] + table[j]].second = 1;
				}
			}
		}
	}
	cout << ans;
	return 0;
}