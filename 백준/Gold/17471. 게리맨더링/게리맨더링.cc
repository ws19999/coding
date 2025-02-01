#include <iostream>
#include <vector>
#include <deque>
#include <climits>
using namespace std;
int N,table[11],total=0,ans=INT_MAX;
vector<int> vec[11];
bool check[11] = { false };
void dfs(int num, int asum)
{
	deque<int> dq;
	int tsum = table[1];
	dq.push_back(1);
	bool check1[11] = { false };
	check1[1] = true;
	while (!dq.empty())
	{
		int temp = dq.front();
		dq.pop_front();
		for (auto k : vec[temp])
		{
			if (!check1[k] && check[k])
			{
				check1[k] = true;
				dq.push_back(k);
				tsum += table[k];
			}
		}
	}
	if (tsum == asum)
	{
		for (int j = 1; j <= N; j++)check1[j] = false;
		for (int i = 2; i <= N; i++)
		{
			if (!check[i])
			{
				tsum = table[i];
				dq.push_back(i);
				check1[i] = true;
				while (!dq.empty())
				{
					int temp = dq.front();
					dq.pop_front();
					for (auto k : vec[temp])
					{
						if (!check1[k] && !check[k])
						{
							check1[k] = true;
							dq.push_back(k);
							tsum += table[k];
						}
					}
				}
				if (tsum == total - asum)ans = min(ans, abs(tsum - asum));
				break;
			}
		}
	}
	else return;
	for (int i = 2; i <= N; i++)
	{
		if (!check[i])
		{
			check[i] = true;
			dfs(i, asum + table[i]);
			check[i] = false;
		}
	}
}
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> table[i];
		total += table[i];
	}
	for (int i = 1; i <= N; i++)
	{
		int num;
		cin >> num;
		for (int j = 0; j < num; j++)
		{
			int node;
			cin >> node;
			vec[i].push_back(node);
		}
	}
	check[1] = true;
	dfs(1, table[1]);
	if (ans == INT_MAX)cout << -1;
	else cout << ans;
	return 0;
}