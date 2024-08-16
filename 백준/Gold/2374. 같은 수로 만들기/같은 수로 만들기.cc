#include <iostream>
#include <deque>
using namespace std;
unsigned long long answer = 0;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	deque<int> dq;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		if (dq.empty())dq.push_back(num);
		else
		{
			if (num == dq.back())continue;
			if (num < dq.back())dq.push_back(num);
			else
			{
				answer += num - dq.back();
				while (!dq.empty())
				{
					if (dq.back() <= num)dq.pop_back();
					else break;
				}
				dq.push_back(num);
			}
		}
	}
	cout << answer + dq.front() - dq.back();
	return 0;
}