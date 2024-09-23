#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> vec[100001];
int N, M, R;
int visited[100001];
void dfs(int num, int depth)
{
	visited[num] = depth;
	for (auto i : vec[num])
	{
		if (visited[i] == -1)dfs(i, depth + 1);
	}
}
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> N >> M >> R;
	for (int i = 1; i <= N; i++)visited[i] = -1;
	for (int i = 0; i < M; i++)
	{
		int u, v;
		cin >> u >> v;
		vec[u].push_back(v);
		vec[v].push_back(u);
	}
	for (int i = 1; i <= N; i++)sort(vec[i].begin(), vec[i].end());
	dfs(R, 0);
	for (int i = 1; i <= N; i++)cout << visited[i] << "\n";
	return 0;
}