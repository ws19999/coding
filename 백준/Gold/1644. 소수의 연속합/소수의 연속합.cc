#include <iostream>
#include <vector>
using namespace std;
vector<int> primelist;
int table[4000001];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N,sizes=0;
	cin >> N;
	if (N == 1) {
		cout << 0;
		return 0;
	}
	for (int i = 2; i <= N; i++)
	{
		if (!table[i])
		{
			table[i] = 1;
			primelist.push_back(i);
			sizes++;
			int temp = i;
			temp += i;
			while (temp <= N)
			{
				table[temp] = 1;
				temp += i;
			}
		}
	}
	int s = 0;
	int e = 0;
	int sums = 2;
	int ans = 0;
	while (s<=e)
	{
		if (sums == N)
		{
			ans++;
			if (e >= sizes - 1)break;
			e++;
			sums += primelist[e];
		}
		else if (sums < N)
		{
			if (e >= sizes - 1)break;
			e++;
			sums += primelist[e];
		}
		else if (sums > N)
		{
			sums -= primelist[s];
			s++;
		}
	}
	cout << ans;
	return 0;
}