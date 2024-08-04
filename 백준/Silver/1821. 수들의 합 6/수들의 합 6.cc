#include <iostream>
#include <deque>
using namespace std;
int N, F, sums = 0;
int square[11][11];
bool check[11], finished = false;
deque<int> answer;
void dfs(int depth)
{
	if (depth == N and sums==F)
	{
		for (auto i : answer)cout << i << " ";
		finished = true;
		return;
	}
	for (int i = 1; i <= N; i++)
	{
		if (!check[i])
		{
			if (sums + square[N][depth + 1] * i > F)return;
			sums += square[N][depth + 1] * i;
			answer.push_back(i);
			check[i] = true;
			dfs(depth + 1);
			if (finished)return;
			answer.pop_back();
			check[i] =false;
			sums -= square[N][depth + 1] * i;
		}
	}
}
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cin.tie(0);
	cin >> N >> F;
	square[1][1] = 1;
	for (int i = 2; i <= N; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			square[i][j] = square[i - 1][j - 1] + square[i - 1][j];
		}
	}
	dfs(0);
	return 0;
}