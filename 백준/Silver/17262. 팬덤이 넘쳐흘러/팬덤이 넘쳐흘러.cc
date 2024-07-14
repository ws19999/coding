#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<pair<int, int>> vec;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N,mint=100000,maxt=0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int s, e;
		cin >> s >> e;
		mint = min(mint, e);
		maxt = max(maxt, s);
	}
	if (maxt - mint < 0)cout << 0;
	else cout << maxt - mint;
	return 0;
}