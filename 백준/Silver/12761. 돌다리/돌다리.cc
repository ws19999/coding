#include <iostream>
#include <deque>
using namespace std;
int table[100001],num;
deque<int> dq;
void put(int n)
{
	if (n >= 0 and n <= 100000)
	{
		if (!table[n])
		{
			table[n] = table[num] + 1;
			dq.push_back(n);
		}
	}
}
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int A, B, N, M;
	cin >> A >> B >> N >> M;
	table[N] = 1;
	dq.push_back(N);
	while (!table[M])
	{
		num = dq.front();
		dq.pop_front();
		put(num - 1);
		put(num + 1);
		put(num + A);
		put(num - A);
		put(num + B);
		put(num - B);
		put(num * A);
		put(num * B);
	}
	cout << table[M] - 1;
	return 0;
}