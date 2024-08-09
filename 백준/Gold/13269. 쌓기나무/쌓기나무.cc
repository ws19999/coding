#include <iostream>
using namespace std;
int up[500][500];
int f[500];
int r[500];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> up[i][j];
		}
	}
	for (int i = 0; i < M; i++)cin >> f[i];
	for (int i = N-1; i >=0; i--)cin >> r[i];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (up[i][j])up[i][j] = min(f[j], r[i]);
		}
	}
	for (int i = 0; i < M; i++)
	{
		int temp = 0;
		for (int j = 0; j < N; j++)temp = max(temp,up[j][i]);
		if (temp != f[i])
		{
			cout << -1;
			return 0;
		}
	}
	for (int i = 0; i <N; i++)
	{
		int temp = 0;
		for (int j = 0; j < M; j++)temp = max(temp, up[i][j]);
		if (temp != r[i])
		{
			cout << -1;
			return 0;
		}
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)cout << up[i][j] << " ";
		cout << "\n";
	}
	return 0;
}