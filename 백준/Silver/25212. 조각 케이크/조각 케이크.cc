#include <iostream>
#include <algorithm>
using namespace std;
int N,answer=0;
double cakes[10];
void dfs(int pos, double cur)
{
	for (int i = pos + 1; i < N; i++)
	{
		if (cur + cakes[i] >= double(99) / 100 and cur + cakes[i] <= double(101) / 100)answer++;
		else if (cur + cakes[i] > double(101) / 100)return;
		dfs(i, cur + cakes[i]);
	}
}
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		double cake;
		cin >> cake;
		cakes[i] = 1 / cake;
	}
	sort(cakes, cakes + N);
	dfs(-1, 0);
	cout << answer;
	return 0;
}