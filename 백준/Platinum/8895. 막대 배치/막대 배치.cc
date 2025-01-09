#include <iostream>
using namespace std;
unsigned long long table[21][21][21];
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	table[1][1][1] = 1;
	for (int i = 2; i <= 20; i++) {
		for (int l = 1; l <= 20; l++) {
			for (int r = 1; r <= 20; r++) {
				if (!table[i - 1][l][r])continue;
				int a = l-1;
				int b = r-1;
				table[i][l + 1][r] += table[i - 1][l][r];
				table[i][l][r+1] += table[i - 1][l][r];
				table[i][l][r] += table[i - 1][l][r] * (i - 2);
			}
		}
	}
	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		int n, l, r;
		cin >> n >> l >> r;
		cout << table[n][l][r] << "\n";
	}
	return 0;
}