#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N, M;
	vector<tuple<int, int, char>> vec;
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int a, b;
		char c;
		cin >> a >> b >> c;
		vec.push_back(make_tuple(b, a, c));
	}
	sort(vec.begin(), vec.end());
	for (auto i : vec) {
		cout << get<2>(i);
	}
	return 0;
}