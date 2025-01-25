#include <iostream>
using namespace std;
int stock[10000];
int table[10000];
int bsearch(int i,int maxlen) {
	int f = 0, b = maxlen - 1,ans=maxlen-1;
	while (f <= b) {
		int mid = (f + b) / 2;
		if (table[mid] > stock[i]) {
			ans = mid;
			b = mid - 1;
		}
		else if (table[mid] < stock[i])f = mid + 1;
		else return mid;
	}
	return ans;
}
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		int N,K;
		int ans = 0;
		cin >> N >> K;
		for (int i = 0; i < N; i++)cin >> stock[i];
		table[0] = stock[0];
		int maxlen = 1;
		for (int i = 1; i < N; i++) {
			if (stock[i] > table[maxlen - 1]) {
				table[maxlen++] = stock[i];
				if (maxlen >= K)break;
			}
			else {
				int pos = bsearch(i,maxlen);
				table[pos] = stock[i];
			}
		}
		if (maxlen >= K)ans = 1;
		cout << "Case #" << tc << "\n" << ans<<"\n";
	}
	return 0;
}