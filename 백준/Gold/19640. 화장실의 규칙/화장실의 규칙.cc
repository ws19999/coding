#include <iostream>
#include <deque>
#include <queue>
#include <tuple>
using namespace std;
int N, M,K,Deca;
deque<tuple<int, int,int,int>> dq[100000];
priority_queue<tuple<int, int, int,int>> pq;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> N >> M >> K;
	Deca = K;
	for (int i = 0; i < N; i++)
	{
		int D, H;
		cin >> D >> H;
		dq[i % M].push_back(make_tuple(D, H,-(i%M),i));
		if (i < M)pq.push(make_tuple(D, H, -(i%M),i));
	}
	int p = 0;
	while (true)
	{
		if (get<3>(pq.top()) == Deca)break;
		int pos = (-get<2>(pq.top())) % M;
		int cnt = get<3>(pq.top());
		pq.pop();
		if (cnt+M<N)pq.push(dq[pos][cnt/M+1]);
		p++;
	}
	cout << p;
	return 0;
}