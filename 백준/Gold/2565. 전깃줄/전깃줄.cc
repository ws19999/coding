#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int table[501];
bool check[501];
vector<pair<int,int>> line;
int N, ans = 0;
void dfs(int num, int depth)
{
	check[line[num].second] = true;
	if (table[line[num].second] > depth)return;
	table[line[num].second] = depth;
	for (int i = num + 1; i < N; i++)if (line[i].second > line[num].second)dfs(i, depth + 1);
	ans = max(ans, depth);
}
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int a, b;
		cin >> a >> b;
		line.push_back(make_pair(a, b));
	}
	sort(line.begin(), line.end());
	for (int i = 0; i < N; i++)if (!check[line[i].second])dfs(i, 1);
	cout << N - ans;
	return 0;
}