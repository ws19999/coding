#include <iostream>
#include <climits>
using namespace std;
unsigned long long dist[100001];
unsigned long long station[100001];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N;
	unsigned long long answer = 0;
	unsigned long long temp = ULONG_MAX;
	unsigned long long dis = 0;
	cin >> N;
	for (int i = 0; i < N - 1; i++)cin >> dist[i];
	for (int i = 0; i < N; i++)cin >> station[i];
	for (int i = 0; i < N-1; i++)
	{
		if (station[i] < temp)
		{
			answer += temp * dis;
			dis = 0;
			temp = station[i];
		}
		dis += dist[i];
	}
	answer += temp * dis;
	cout << answer;
	return 0;
}