#include <iostream>
#include <vector>
using namespace std;
int chess[10][10];
int n,cnt=0,temp=0,ans=0;
int table[40];
vector<int> check[10][10];
void dfs(int num,int k)
{
	if (num == n * n)
	{
		temp = max(temp, cnt);
		return;
	}
	int x = num / n;
	int y = num % n;
	if (k == 1 && (x + y) % 2 == 0)
	{
		dfs(num + 1, k);
		return;
	}
	else if (k == 2 && (x + y) % 2 == 1)
	{
		dfs(num + 1, k);
		return;
	}
	bool possible = true;
	if (!chess[x][y])possible = false;
	for (auto i : check[x][y])if (table[i])possible = false;
	if (possible)
	{
		dfs(num + 1,k);
		table[check[x][y][0]] = 1;
		table[check[x][y][1]] = 1;
		cnt++;
		dfs(num + 1,k);
		cnt--;
		table[check[x][y][0]] = 0;
		table[check[x][y][1]] = 0;
	}
	else dfs(num + 1,k);
}
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> chess[i][j];
		}
	}
	int x = 0, y = 0;
	for (int i = 0; i < n * 2 - 1; i++)
	{
		int a = x, b = y;
		while (a >= 0 && a < n && b >= 0 && b < n)
		{
			check[a][b].push_back(i);
			a++;
			b--;
		}
		if (y == n - 1)x++;
		else y++;
	}
	x = n - 1, y = 0;
	for (int i = n*2; i <= n * 4-2; i++)
	{
		int a = x, b = y;
		while (a >= 0 && a < n && b >= 0 && b < n)
		{
			check[a][b].push_back(i);
			a++;
			b++;
		}
		if (x == 0)y++;
		else x--;
	}
	dfs(0,1);
	ans += temp;
	temp = 0;
	dfs(0, 2);
	ans += temp;
	cout << ans;
	return 0;
}