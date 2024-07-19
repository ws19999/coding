#include <iostream>
#include <deque>
using namespace std;
int main(void)
{
	bool table[98] = { false };
	int N, P;
	cin >> N >> P;
	deque<int> dq;
	dq.push_back(N);
	while (!table[(dq.back()*N)%P])
	{
		int num = dq.back();
		table[(num * N) % P] = true;
		dq.push_back((num * N) % P);
	}
	while (dq.front() != (dq.back() * N) % P)
	{
		dq.pop_front();
	}
	cout << dq.size();
}