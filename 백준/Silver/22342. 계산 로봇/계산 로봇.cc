#include <iostream>
using namespace std;
int M, N, 가중치[2001][2001],출력값[2001][2001],저장값[2001][2001],ans=0;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> M >> N;
	for (int i = 1; i <= M; i++) {
		for (int j = 1; j <= N; j++) {
			char c;
			cin >> c;
			가중치[i][j] = c - '0';
		}
	}
	for (int i = 1; i <= M; i++)출력값[i][1] = 가중치[i][1];
	for (int j = 2; j <= N; j++) {
		for (int i = 1; i <= M; i++) {
			int 입력 = 0;
			for (int k = j - 1; k >= 1; k--) {
				for (int l = i - (j - k); l <= i + (j - k); l++) {
					if (l >= 1 && l <= M) {
						입력 = max(입력, 출력값[l][k]);
					}
				}
			}
			저장값[i][j] = 입력;
			ans = max(ans, 입력);
			출력값[i][j] = 입력 + 가중치[i][j];
		}
	}
	cout << ans;
	return 0;
}