#include <iostream>
#include <tuple>
#include <deque>
#include <climits>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N, K,answer=INT_MAX;
	deque<tuple<int, int, int>> dq;
	int table[21][2];
	cin >> N;
	for (int i = 1; i <= N - 1; i++) {
		for (int j = 0; j <= 1; j++)cin >> table[i][j];
	}
	cin >> K;
	dq.push_back(make_tuple(1, 0, 1));
	while (!dq.empty()) {
		int pos = get<0>(dq.front());
		int energy = get<1>(dq.front());
		int j = get<2>(dq.front());
		dq.pop_front();
		if (pos == N) {
			answer = min(answer, energy);
			continue;
		}
		if (pos == N - 1) {
			answer = min(answer, energy + table[pos][0]);
		}
		else dq.push_back(make_tuple(pos + 1, energy + table[pos][0], j));
		if (pos < N - 1) {
			if (pos + 2 == N) {
				answer = min(answer, energy + table[pos][1]);
			}
			else dq.push_back(make_tuple(pos + 2, energy + table[pos][1], j));
		}
		if (pos < N - 2 and j==1) {
			if (pos + 3 == N) {
				answer = min(answer, energy + K);
			}
			else dq.push_back(make_tuple(pos + 3, energy + K, 0));
		}	
	}
	cout << answer;
	return 0;
}