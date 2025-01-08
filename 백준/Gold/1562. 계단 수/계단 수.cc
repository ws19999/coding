#include <iostream>
# define Mod 1000000000
using namespace std;
int table[101][10][1024];
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N;
	cin >> N;
	for(int i=1;i<=9;i++){
		table[1][i][1 << i] = 1;
	}
	for (int i = 2; i <= N; i++) {
		for (int j = 0; j <= 9; j++) {
			int b = 1 << j; 
			for (int k = 1; k < 1024; k++) {
				int p;
				if (j != 0) {
					if (k&b) {
						table[i][j][k] += table[i - 1][j - 1][k];
						table[i][j][k] %= Mod;
					}
					else {
						table[i][j][k + b] += table[i - 1][j - 1][k];
						table[i][j][k + b] %= Mod;
					}
				}
				if (j != 9) {
					if (k & b) {
						table[i][j][k] += table[i - 1][j + 1][k];
						table[i][j][k] %= Mod;
					}
					else {
						table[i][j][k + b] += table[i - 1][j + 1][k];
						table[i][j][k + b] %= Mod;
					}
				}
			}
		}
	}
	int answer = 0;
	for (int i = 0; i <= 9; i++) {
		answer += table[N][i][1023];
		answer %= Mod;
	}
	cout << answer;
	return 0;
}