#include <iostream>
using namespace std;
int nums[1000];
int table[1000];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N,answer=0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> nums[i];
		int maxx = 0;
		for (int j = 0; j < i; j++)
		{
			if (nums[j] < nums[i])
			{
				maxx = max(maxx, table[j]);
			}
		}
		table[i] = maxx + 1;
		answer = max(answer, table[i]);
	}
	cout << answer;
	return 0;
}