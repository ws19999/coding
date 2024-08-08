#include <iostream>
#include <deque>
using namespace std;
deque<int> table[101];
int check[101];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	deque<deque<int>> dq;
	deque<int> d;
	d.push_back(1);
	d.push_back(2);
	check[1] = 1;
	check[2] = 2;
	table[1].push_back(1);
	table[2].push_back(1);
	table[2].push_back(2);
	dq.push_back(d);
	while (!dq.empty())
	{
		deque<int> temp = dq.front();
		dq.pop_front();
		int s = temp.size();
		for (int i = s-1; i >=0; i--)
		{
			for (int j = s-1; j >= i; j--)
			{
				int nexts = temp[i] + temp[j];
				if (nexts > 100)continue;
				if (nexts <= temp.back())break;
				if (!check[nexts])
				{
					table[nexts] = temp;
					check[nexts] = s+1;
					table[nexts].push_back(nexts);
				}
				else if (s >= check[nexts])continue;
				temp.push_back(nexts);
				dq.push_back(temp);
				temp.pop_back();
			}
		}
	}
	while (true)
	{
		int n;
		cin >> n;
		if (n == 0)return 0;
		for (auto t : table[n])cout << t << " ";
		cout << "\n";
	}
}