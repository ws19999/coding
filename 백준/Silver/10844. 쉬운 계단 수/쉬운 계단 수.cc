#include <iostream>
# define Mod 1000000000
using namespace std;
int table[101][10];
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N;
	cin >> N;
	for(int i=1;i<=9;i++){
		table[1][i] = 1;
	}
	for (int i = 2; i <= N; i++) {
		for (int j = 0; j <= 9; j++) {
			if (j != 0) {
				table[i][j] += table[i - 1][j - 1];
			}
			if (j != 9)table[i][j] += table[i - 1][j + 1];
			table[i][j] %= Mod;
		}
	}
	int answer = 0;
	for (int j = 0; j < 10; j++)answer = (answer + table[N][j]) % Mod;
	cout << answer;
	return 0;
}