#include <iostream>
#include <unordered_map>
using namespace std;
int N, M,ans=0;
bool bitmasking[100001][20];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> N >> M;
	unordered_map<int, int> check;
	for (int o = 0; o < M; o++)
	{
		int d,i,x;
		cin >> d;
		if (d == 1)
		{
			cin >> i >> x;
			int temp = 1;
			bitmasking[i][x - 1] = true;
		}
		else if (d == 2)
		{
			cin >> i >> x;
			int temp = 1;
			bitmasking[i][x - 1] = false;
		}
		else if (d == 3)
		{
			cin >> i;
			for (int a = 18; a >=0; a--)bitmasking[i][a + 1] = bitmasking[i][a];
			bitmasking[i][0] = false;
		}
		else
		{
			cin >> i;
			for (int a = 0; a < 19; a++)bitmasking[i][a] = bitmasking[i][a+1];
			bitmasking[i][19] = false;
		}
	}
	for (int i = 1; i <= N; i++)
	{
		int num = 0;
		for (int j = 0; j < 20; j++)
		{
			num = num * 2 + bitmasking[i][j];
		}
		if (!check[num])
		{
			check[num] = 1;
			ans++;
		}
	}
	cout << ans;
	return 0;
}