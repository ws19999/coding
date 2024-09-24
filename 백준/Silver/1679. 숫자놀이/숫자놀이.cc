#include <iostream>
#include <deque>
#include <vector>
using namespace std;
int nums[50002];
int table[1000];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N, K;
	cin >> N;
	for (int i = 0; i < N; i++)cin >> table[i];
	cin >> K;
	deque<int> dq;
	dq.push_back(0);
	while (!dq.empty())
	{
		int num = dq.front();
		dq.pop_front();
		if (nums[num] == K)break;
		for (int i = 0; i < N; i++)
		{
			if (!nums[num + table[i]])
			{
				nums[num + table[i]] = nums[num] + 1;
				dq.push_back(num + table[i]);
			}
		}
	}
	for (int i = 1; i <= 50001; i++)
	{
		if (!nums[i])
		{
			if (i % 2 == 0)cout << "holsoon win at " << i;
			else cout << "jjaksoon win at " << i;
			return 0;
		}
	}
}