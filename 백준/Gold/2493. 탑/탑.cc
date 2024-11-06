#include <iostream>
#include <queue>
using namespace std;
int table[500001],answer[500001];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	priority_queue<pair<int, int>> pq;
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++)cin >> table[i];
	for (int i = N; i >= 1; i--)
	{
		while (!pq.empty())
		{
			if (-pq.top().first < table[i])
			{
				answer[pq.top().second] = i;
				pq.pop();
			}
			else break;
		}
		pq.push(make_pair(-table[i], i));
	}
	for (int i = 1; i <= N; i++)cout << answer[i] << " ";
	return 0;
}