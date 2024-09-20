#include <iostream>
#include <queue>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, w, L,answer=0,current=0;
	cin >> n >> w >> L;
	queue<int> bridge,truck;
	for (int i = 0; i < n; i++)
	{
		int weight;
		cin >> weight;
		truck.push(weight);
	}
	for (int i = 0; i < w; i++)bridge.push(0);
	while (true)
	{
		answer++;
		if (truck.empty())
		{
			bridge.pop();
			if (bridge.empty())break;
		}
		else
		{
			if (current + truck.front() - bridge.front() <= L)
			{
				current += truck.front() - bridge.front();
				bridge.pop();
				bridge.push(truck.front());
				truck.pop();
			}
			else
			{
				current -= bridge.front();
				bridge.pop();
				bridge.push(0);
			}
		}
	}
	cout << answer;
}