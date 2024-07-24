#include <iostream>
#include <deque>
#include <unordered_map>
using namespace std;
int N, M,ans=0;
deque<int> dq[100001];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> N >> M;
	for (int i = 1; i <= N; i++)
	{
		for (int j = 0; j < 20; j++)dq[i].push_back(0);
	}
	for (int o = 0; o < M; o++)
	{
		int d,i,x;
		cin >> d;
		if (d == 1)
		{
			cin >> i >> x;
			dq[i][x - 1] = 1;
		}
		else if (d == 2)
		{
			cin >> i >> x;
			dq[i][x - 1] = 0;
		}
		else if (d == 3)
		{
			cin >> i;
			dq[i].push_front(0);
			dq[i].pop_back();
		}
		else
		{
			cin >> i;
			dq[i].pop_front();
			dq[i].push_back(0);
		}
	}
	unordered_map<int, int> check;
	for (int i = 1; i <= N; i++)
	{
		int num = 0;
		for (int j = 0; j < 20; j++)
		{
			num = num * 2 + dq[i][j];
		}
		if (!check[num])
		{
			check[num] = 1;
			ans++;
		}
	}
	cout << ans;
	return 0;
}