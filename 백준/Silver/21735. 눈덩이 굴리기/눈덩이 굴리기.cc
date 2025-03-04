#include <iostream>
#include <deque>
#include <tuple>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N, M, 앞마당[101] = { 0 }, ans = 1, table[101] = { 0 };
	cin >> N>>M;
	for (int i = 1; i <= N; i++)cin >> 앞마당[i];
	deque<tuple<int,int, int>> dq;
	dq.push_back(make_tuple(1,0, M));
	while (!dq.empty()) {
		int 눈덩이 = get<0>(dq.front());
		int pos = get<1>(dq.front());
		int t = get<2>(dq.front());
		ans = max(ans, 눈덩이);
		dq.pop_front();
		if (pos == N || !t)continue;
		if(table[pos+1]< 눈덩이 + 앞마당[pos + 1])dq.push_back(make_tuple(눈덩이 + 앞마당[pos + 1], pos + 1, t - 1));
		if (pos < N - 1) {
			if(table[pos+2]<눈덩이/2 + 앞마당[pos+2])dq.push_back(make_tuple(눈덩이 / 2 + 앞마당[pos + 2], pos + 2, t - 1));		
		}
	}
	cout << ans;
	return 0;
}