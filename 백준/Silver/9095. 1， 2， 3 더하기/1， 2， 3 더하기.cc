#include <iostream>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int T, arr[12] = { 0 };
	arr[0] = 1;
	for (int i = 1; i <= 11; i++)
	{
		for (int j = -3; j <= -1; j++)
		{
			if (i + j >= 0)arr[i] += arr[i + j];
		}
	}
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int n;
		cin >> n;
		cout << arr[n] << "\n";
	}
}