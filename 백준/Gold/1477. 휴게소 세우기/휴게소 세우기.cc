#include <iostream>
#include <algorithm>
using namespace std;
int N, M, L,highway[52],localmax=0,localmin=1,answer;
void bsearch() {
	while (localmin <= localmax) {
		int localmid = (localmax + localmin) / 2;
		int cnt = 0;
		for (int i = 1; i <= N + 1; i++) {
			cnt += (highway[i] - highway[i - 1]) / localmid - 1;
			if ((highway[i] - highway[i - 1]) % localmid)cnt++;
		}
		if (cnt <= M) {
			answer = localmid;
			localmax = localmid - 1;
		}
		else localmin = localmid + 1;
	}
}
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> N >> M >> L;
	for (int i = 0; i < N; i++)cin >> highway[i];
	highway[N + 1] = L;
	sort(highway, highway + N+2);
	for (int i = 1; i <= N + 1; i++) {
		localmax = max(localmax, highway[i] - highway[i - 1]);
	}
	bsearch();
	cout << answer;
	return 0;
}