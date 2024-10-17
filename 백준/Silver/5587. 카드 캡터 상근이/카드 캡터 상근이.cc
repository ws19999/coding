#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
bool check[201];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,cards[2],seq=0,table=0;
	cin >> n;
	cards[0] = n;
	cards[1] = n;
	deque<int> dq[2];
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		dq[0].push_back(num);
		check[num] = true;
	}
	sort(dq[0].begin(), dq[0].end());
	for (int i = 1; i <= 2 * n; i++)
	{
		if (!check[i])dq[1].push_back(i);
	}
	while (true)
	{
		if (!cards[0] or !cards[1])break;
		while (dq[seq].front() == -1)dq[seq].pop_front();
		if (table == 0)
		{
			table = dq[seq].front();
			dq[seq].pop_front();
			cards[seq]--;
		}
		else
		{
			bool possible = false;
			for (int i = 0; i < dq[seq].size(); i++)
			{
				if (dq[seq][i] > table)
				{
					table = dq[seq][i];
					dq[seq][i] = -1;
					cards[seq]--;
					possible = true;
					break;
				}
			}
			if (!possible)table = 0;
		}
		seq = (seq + 1) % 2;
	}
	cout << cards[1] << "\n" << cards[0];
	return 0;
}