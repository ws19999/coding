#include <iostream>
using namespace std;
int maze[1000],check[1000];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N;
	cin >> N;
	for (int i = 1; i < N; i++)check[i] = -1;
	for (int i = 0; i < N; i++)
	{
		cin >> maze[i];
		if (check[i] >= 0)
		{
			for (int j = i + 1; j <= i + maze[i]; j++)
			{
				if (j >= N)break;
				if (check[j] == -1)check[j] = check[i] + 1;
				else check[j] = min(check[j], check[i] + 1);
			}
		}
	}
	cout << check[N - 1];
	return 0;
}