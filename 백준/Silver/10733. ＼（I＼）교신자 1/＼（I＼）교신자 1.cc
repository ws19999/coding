#include <iostream>
#include <deque>
using namespace std;
int table[3],I,K;
long long answer[40];
void dfs(deque<long long> dq,int num)
{
	if (num == 0)
	{
		dq.push_front(I);
	}
	else if (num == 1)
	{
		long long a = dq.front();
		dq.pop_front();
		long long b = dq.front();
		dq.pop_front();
		dq.push_front((a + b)%1000000007);
	}
	else if (num == 2)
	{
		long long a = dq.front();
		dq.pop_front();
		long long b = dq.front();
		dq.pop_front();
		dq.push_front((a * b)%1000000007);
	}
	if (table[0] + table[1] + table[2] == 0)
	{
		for (int i = 0; i < K; i++)
		{
			answer[i] += dq[i];
			answer[i] %= 1000000007;
		}
		return;
	}
	for (int i = 0; i < 3; i++)
	{
		if (table[i] == 0)continue;
		table[i]--;
		dfs(dq,i);
		table[i]++;
	}
}
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> I >> table[0] >> table[1] >> table[2] >> K;
	deque<long long> dq;
	for (int i = 0; i < 100; i++)dq.push_back(I);
	dfs(dq,-1);
	for (int i = 0; i < K; i++)cout << answer[i] % 1000000007 << "\n";
	return 0;
}