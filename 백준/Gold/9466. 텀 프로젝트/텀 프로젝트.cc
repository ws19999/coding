#include <iostream>
#include <unordered_map>
using namespace std;
bool check[100001];
unordered_map<int, int> maps;
int table[100001];
int ans = 0;
bool team = false;
int cycle = 0;
void dfs(int n)
{
	maps[n] = 1;
	check[n] = true;
	if (maps[table[n]])
	{
		team = true;
		cycle = table[n];
	}
	else if(!check[table[n]])dfs(table[n]);
	maps[n] = 0;
	if (!team)ans++;
	if (n == cycle)
	{
		team = false;
		cycle = 0;
	}
}
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++)
	{
		int n;
		ans = 0;
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			cin >> table[i];
			check[i] = false;
		}
		for (int i = 1; i <= n; i++)
		{
			if (check[i])continue;
			dfs(i);
		}
		cout << ans<<"\n";
	}
	return 0;
}