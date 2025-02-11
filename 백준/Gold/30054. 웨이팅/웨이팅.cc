#include <iostream>
#include <deque>
#include <algorithm>
#include <queue>
int reserved[300002];
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N,ans=0;
	cin >> N;
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> guests; // 도착,예약
	deque<pair<int, int>> line; //도착 예약
	for (int i = 0; i < N; i++)
	{
		int reservation, arrival;
		cin >> reservation >> arrival;
		reserved[reservation] = arrival;
		guests.push(make_pair(arrival, reservation));
	}
	for (int time = 1; time <= 300001; time++)
	{
		if (line.empty() and guests.empty())break;
		while (!line.empty())
		{
			if (reserved[line.front().second]==0)line.pop_front();
			else break;
		}
		while (!guests.empty())
		{
			if (guests.top().first == time)
			{
				line.push_back(guests.top());
				guests.pop();
			}
			else break;
		}
		if (reserved[time] == 0 || reserved[time]>time)
		{
			if (!line.empty())
			{
				ans = max(ans,time-line.front().first);
				reserved[line.front().second] = 0;
				line.pop_front();
			}
		}
		else if (reserved[time] <= time)
		{
			ans = max(ans, time - reserved[time]);
			reserved[time] = 0;
		}
	}
	cout << ans;
	return 0;
}