#include <iostream>
#include <vector>
using namespace std;
vector<int> vec[51];
double bucks[51];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	bucks[1] = 100;
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < M; i++)
	{
		int v, w;
		cin >> v >> w;
		vec[v].push_back(w);
	}
	for (int i = 1; i <= N; i++)
	{
		if (bucks[i] == 0 or vec[i].empty())continue;
		int K = vec[i].size();
		for (auto k : vec[i])
		{
			bucks[k] += bucks[i] / K;
		}
		bucks[i] = 0;
	}
	double ans = 0;
	for (int i = 1; i <= N; i++)
	{
		ans = max(ans, bucks[i]);
	}
	cout << ans;
	return 0;
}