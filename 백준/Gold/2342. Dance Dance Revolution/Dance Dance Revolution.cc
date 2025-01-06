#include <iostream>
#include <climits>
#include <deque>
#include <tuple>
using namespace std;
int ans = INT_MAX;
int table[100002][5][5];
int dir[100002];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int i = 1;
	dir[0] = 1;
	while(dir[i-1])
	{
		cin >> dir[i];
		for (int a = 0; a < 5; a++)
		{
			for (int b = 0; b < 5; b++)
			{
				table[i][a][b] = INT_MAX;
			}
		}
		i++;
	}
	deque<tuple<int, int, int>> dq;
	dq.push_back(make_tuple(1, 0, 0));
	while (!dq.empty())
	{
		int num = get<0>(dq.front());
		int left = get<1>(dq.front());
		int right = get<2>(dq.front());
		dq.pop_front();
		if (dir[num] == 0)continue;
		if (left == dir[num] && table[num - 1][left][right] + 1 < table[num][dir[num]][right] && dir[num] != right)
		{
			table[num][dir[num]][right] = table[num - 1][left][right] + 1;
			table[num][right][dir[num]] = table[num - 1][left][right] + 1;
			dq.push_back(make_tuple(num + 1, dir[num], right));
		}
		else if (left == 0 && table[num - 1][left][right] + 2 < table[num][dir[num]][right] && dir[num] != right)
		{
			table[num][dir[num]][right] = table[num - 1][left][right] + 2;
			table[num][right][dir[num]] = table[num - 1][left][right] + 2;
			dq.push_back(make_tuple(num + 1, dir[num], right));
		}
		else if (abs(left - dir[num]) != 2 && table[num - 1][left][right] + 3 < table[num][dir[num]][right] && dir[num] != right)
		{
			table[num][dir[num]][right] = table[num - 1][left][right] + 3;
			table[num][right][dir[num]] = table[num - 1][left][right] + 3;
			dq.push_back(make_tuple(num + 1, dir[num], right));
		}
		else if (table[num - 1][left][right] + 4 < table[num][dir[num]][right] && dir[num] != right)
		{
			table[num][dir[num]][right] = table[num - 1][left][right] + 4;
			table[num][right][dir[num]] = table[num - 1][left][right] + 4;
			dq.push_back(make_tuple(num + 1, dir[num], right));
		}
		if (right == dir[num] && table[num - 1][left][right] + 1 < table[num][left][dir[num]] && dir[num] != left)
		{
			table[num][left][dir[num]] = table[num - 1][left][right] + 1;
			table[num][dir[num]][left] = table[num - 1][left][right] + 1;
			dq.push_back(make_tuple(num + 1, left,dir[num]));
		}
		else if (right == 0 && table[num - 1][left][right] + 2 < table[num][left][dir[num]] && dir[num] != left)
		{
			table[num][left][dir[num]] = table[num - 1][left][right] + 2;
			table[num][dir[num]][left] = table[num - 1][left][right] + 2;
			dq.push_back(make_tuple(num + 1, left, dir[num]));
		}
		else if (abs(right - dir[num]) != 2 && table[num - 1][left][right] + 3 < table[num][left][dir[num]] && dir[num] != left)
		{
			table[num][left][dir[num]] = table[num - 1][left][right] + 3;
			table[num][dir[num]][left] = table[num - 1][left][right] + 3;
			dq.push_back(make_tuple(num + 1, left, dir[num]));
		}
		else if (table[num - 1][left][right] + 4 < table[num][left][dir[num]] && dir[num] != left)
		{
			table[num][left][dir[num]] = table[num - 1][left][right] + 4;
			table[num][dir[num]][left] = table[num - 1][left][right] + 4;
			dq.push_back(make_tuple(num + 1, left, dir[num]));
		}
	}
	int ans = INT_MAX;
	for (int a = 0; a < 5; a++)
	{
		for (int b = a+1; b < 5; b++)
		{
			ans = min(ans, table[i - 2][a][b]);
		}
	}
	cout << ans;
	return 0;
}