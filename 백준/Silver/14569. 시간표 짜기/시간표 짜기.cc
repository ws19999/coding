#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N;
	cin >> N;
	vector<int> vec[1000];
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		for (int j = 0; j < num; j++)
		{
			int t;
			cin >> t;
			vec[i].push_back(t);
		}
	}
	int M;
	cin >> M;
	for (int i = 0; i < M; i++)
	{
		int table[51] = { 0 };
		int num;
		cin >> num;
		for (int j = 0; j < num; j++)
		{
			int t;
			cin >> t;
			table[t] = 1;
		}
		int cnt = 0;
		for (int k = 0; k < N; k++)
		{
			bool possible = true;
			for (auto a : vec[k])
			{
				if (!table[a])
				{
					possible = false;
					break;
				}
			}
			if (possible)cnt++;
		}
		cout << cnt << "\n";
	}
	return 0;
}