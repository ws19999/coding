#include <iostream>
#include <queue>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N, 징검다리[10001], a, b, answer[10001] = { 0 };
	cin >> N;
	for (int i = 1; i <= N; i++)cin >> 징검다리[i];
	cin >> a >> b;
	if (a == b)
	{
		cout << 0;
		return 0;
	}
	queue<int> 큐;
	큐.push(a);
	answer[a] = 0;
	while (!큐.empty())
	{
		int num = 큐.front();
		큐.pop();
		if ((b - num) % 징검다리[num] == 0)
		{
			cout << answer[num] + 1;
			return 0;
		}
		int temp = num-징검다리[num];
		while (temp >= 1)
		{
			if (answer[temp] == 0 and temp!=a)
			{
				answer[temp] = answer[num] + 1;
				큐.push(temp);
			}
			temp -= 징검다리[num];
		}
		temp = num + 징검다리[num];
		while (temp <=N)
		{
			if (answer[temp] == 0 and temp!=a)
			{
				answer[temp] = answer[num] + 1;
				큐.push(temp);
			}
			temp += 징검다리[num];
		}
	}
	cout << -1;
	return 0;
}