#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;
int arr[10000];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++)
	{
		int N,answer=0;
		cin >> N;
		for (int i = 0; i < N; i++)cin >> arr[i];
		sort(arr, arr + N);
		deque<int> dq;
		for (int i = 0; i < N; i++)
		{
			if (i == 0)dq.push_back(arr[i]);
			else if (i % 2 == 0)
			{
				answer = max(answer, abs(dq.back() - arr[i]));
				dq.push_back(arr[i]);
			}
			else 
			{
				answer = max(answer, abs(dq.front() - arr[i]));
				dq.push_front(arr[i]);
			}
			answer = max(answer, abs(dq.front() - dq.back()));
		}
		cout << answer << "\n";
	}
	return 0;
}