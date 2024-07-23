#include <iostream>
#include <climits>
#include <queue>
#include <vector>
using namespace std;
vector<pair<int, int>> road[1001];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N,M,X,ans=0;
	cin >> N >> M >> X;
	int table[1001];
	for (int i = 1; i <= N; i++)table[i] = INT_MAX;
	table[X] = 0;
	for (int i = 0; i < M; i++)
	{
		int start, end, t;
		cin >> start >> end >> t;
		road[start].push_back(make_pair(end, t));
	}
	priority_queue<pair<int, int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
	pq.push(make_pair(0, X));
	while (!pq.empty())
	{
		int dist = pq.top().first;
		int town = pq.top().second;
		pq.pop();
		if (table[town] < dist)continue;
		for (auto i : road[town])
		{
			if (table[i.first] > dist + i.second)
			{
				table[i.first] = dist + i.second;
				pq.push(make_pair(table[i.first], i.first));
			}
		}
	}
	for (int i = 1; i <= N; i++)
	{
		priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq1;
		pq1.push(make_pair(0, i));
		int table1[1001];
		for (int k = 1; k <= N; k++)table1[k] = INT_MAX;
		table1[i] = 0;
		while (true)
		{
			int dist = pq1.top().first;
			int town = pq1.top().second;
			pq1.pop();
			if (town == X)
			{
				table[i] += dist;
				break;
			}
			if (table1[town] < dist)continue;
			for (auto k : road[town])
			{
				if (table1[k.first] > k.second + dist)
				{
					table1[k.first] = k.second + dist;
					pq1.push(make_pair(dist + k.second, k.first));
				}
			}
		}
	}
	for (int i = 1; i <= N; i++)ans = max(ans, table[i]);
	cout << ans;
	return 0;
}