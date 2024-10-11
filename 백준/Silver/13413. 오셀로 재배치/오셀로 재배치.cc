#include <iostream>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++)
	{
		int N,a=0,b=0;
		cin >> N;
		string A, B;
		cin >> A >> B;
		for (int i = 0; i < N; i++)
		{
			if (A[i] != B[i])
			{
				if (A[i] == 'B')a++;
				else b++;
			}
		}
		cout << max(a, b) << "\n";
	}
	return 0;
}