#include <iostream>
#include <deque>
#include <queue>
#include <tuple>
using namespace std;
int N, M,K;
tuple<int, int, int,int> Deca;
deque<tuple<int, int,int,int>> dq[100000];
priority_queue<tuple<int, int, int,int>> pq;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> N >> M >> K;
	for (int i = 0; i < N; i++)
	{
		int D, H;
		cin >> D >> H;
		dq[i % M].push_back(make_tuple(D, H,-(i%M),i));
		if (i < M)pq.push(make_tuple(D, H, -(i%M),i));
		if (i == K)Deca = make_tuple(D, H, -(i%M),i);
	}
	int p = 0;
	while (true)
	{
		if (pq.top() == Deca)break;
		int pos = (-get<2>(pq.top())) % M;
		pq.pop();
		dq[pos].pop_front();
		if (!dq[pos].empty())pq.push(dq[pos].front());
		p++;
	}
	cout << p;
	return 0;
}