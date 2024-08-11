#include <iostream>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++)
	{
		int N, S, E;
		cin >> N >> S >> E;
		if (abs(S - E) == N - 1)cout << "0\n";
		else if (abs(S - E) == 1 or (S == 1 or S == N))cout << "1\n";
		else cout << "2\n";
	}
	return 0;
}