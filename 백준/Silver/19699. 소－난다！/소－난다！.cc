#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int N, M, 소[9];
bool 합성수[10001] = { false };
set<int> ans;
void make_prime() {
	for (int i = 2; i <= 100; i++) {
		if (!합성수[i]) {
			for (int j = i + i; j <= 10000; j += i) {
				합성수[j] = true;
			}
		}
	}
}
void dfs(int pos, int depth,int sums) {
	if (depth == M) {
		if (!합성수[sums])ans.insert(sums);
		return;
	}
	for (int i = pos + 1; i < N; i++) {
		dfs(i, depth + 1, sums + 소[i]);
	}
}
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> N >> M;
	for (int i = 0; i < N; i++)cin >> 소[i];
	합성수[1] = true;
	make_prime();
	sort(소, 소 + N);
	dfs(-1, 0, 0);
	if (ans.empty())cout << -1;
	else {
		for (auto i : ans)cout << i << " ";
	}
	return 0;
}