#include <iostream>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N, M, section[302][302], answer[302][302] = { 0 };
	cin >> N >> M;
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= M; j++)
		{
			cin >> section[i][j];
			answer[i][j] = max(answer[i - 1][j], answer[i][j - 1]) + section[i][j];
		}
	}
	cout << answer[N][M];
	return 0;
}