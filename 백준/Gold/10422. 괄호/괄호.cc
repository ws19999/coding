#include <iostream>
#define MOD 1000000007
using namespace std;
unsigned long long table[5001][3];
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int totals = 1;
	table[2][0] = 1;
	table[2][2] = 1;
	for (int i = 4; i <= 5000; i += 2) {
		table[i][0] = table[i - 2][2];
		for (int j = 2; j < i / 2; j++) {
			table[i][1] += (table[j][2] * table[i - j][0]) % MOD + (table[j][0] * table[i - j][2]) % MOD;
			table[i][1] %= MOD;
		}
		if (i % 4 == 0) {
			table[i][1] += (table[i / 2][0] * table[i / 2][2])%MOD;
		}
		table[i][1] %= MOD;
		table[i][2] = (table[i][0] + table[i][1]) % MOD;
	}
	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		int L;
		cin >> L;
		cout << table[L][2] << "\n";
	}
	return 0;
}