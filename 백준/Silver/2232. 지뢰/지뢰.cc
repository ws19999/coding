#include <iostream>
#include <deque>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N,answer=0;
	cin >> N;
	deque<int> dq;
	dq.push_back(0);
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		dq.push_back(num);
	}
	dq.push_back(0);
	for (int i = 1; i <= N; i++)
	{
		if (dq[i] >= dq[i - 1] and dq[i] >= dq[i + 1])cout << i << "\n";
	}
	return 0;
}