#include <iostream>
#include <climits>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N, house[3][1001] = { 0 },answer=INT_MAX;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> house[j][i];
			int temp = INT_MAX;
			for (int k = 0; k < 3; k++)
			{
				if(k!=j)temp = min(temp,house[k][i - 1]);
			}
			house[j][i] += temp;
		}
	}
	for (int j = 0; j < 3; j++)answer = min(answer, house[j][N]);
	cout << answer;
	return 0;
}