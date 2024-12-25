#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	deque<pair<int, int>> problems;
	int N,zeros=0;
	long long sums = 0;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		int s;
		cin >> s;
		problems.push_back(make_pair(s, i));
		sums += s;
		if (s == 0) {
			zeros++;
		}
	}
	if (sums != N - 1) {
		cout << -1;
		return 0;
	}
	sort(problems.begin(), problems.end());
	for (int i = 1; i <= N * 2 - 1; i++) {
		if (i % 2 == 1) {
			if (zeros)zeros--;
			cout << problems.front().second << "\n";
			problems.pop_front();
		}
		else {
			problems[zeros].first--;
			cout << problems[zeros].second << "\n";
			if (problems[zeros].first == 0)zeros++;
		}
	}
	return 0;
}