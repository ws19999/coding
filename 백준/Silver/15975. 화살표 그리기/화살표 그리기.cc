#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> vec[100001];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N;
	cin >> N;
	long long ans = 0;
	for (int i = 0; i < N; i++)
	{
		int pos, color;
		cin >> pos >> color;
		vec[color].push_back(pos);
	}
	for (int i = 1; i <= N; i++)
	{
		int s = vec[i].size();
		if (s == 1)continue;
		sort(vec[i].begin(), vec[i].end());
		for (int j = 0; j < s; j++)
		{
			if (j == 0)
			{
				ans += vec[i][1] - vec[i][0];
			}
			else if (j == s - 1)
			{
				ans += vec[i][j] - vec[i][j - 1];
			}
			else
			{
				ans += min(vec[i][j] - vec[i][j - 1], vec[i][j + 1] - vec[i][j]);
			}
		}
	}
	cout << ans;
	return 0;
}