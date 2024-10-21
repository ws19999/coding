#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N;
	cin >> N;
	for (int tc = 1; tc <= N; tc++)
	{
		int T;
		cin >> T;
		deque<pair<int, int>> dq;
		int NA, NB,AT=0,BT=0,A=0,B=0;
		cin >> NA >> NB;
		for (int i = 0; i < NA; i++)
		{
			int h, m; char c;
			cin >> h>>c >> m;
			dq.push_back(make_pair(60 * h + m, 3));
			cin >> h >> c >> m;
			dq.push_back(make_pair(60 * h + m+T, 2));
		}
		for (int i = 0; i < NB; i++)
		{
			int h, m; char c;
			cin >> h >> c >> m;
			dq.push_back(make_pair(60 * h + m, 4));
			cin >> h >> c >> m;
			dq.push_back(make_pair(60 * h + m+T, 1));
		}
		sort(dq.begin(), dq.end());
		while (!dq.empty())
		{
			int type = dq.front().second;
			dq.pop_front();
			if (type == 1)AT++;
			else if (type == 2)BT++;
			else if (type == 3)
			{
				if (AT)AT--;
				else A++;
			}
			else if (type == 4)
			{
				if (BT)BT--;
				else B++;
			}
		}
		cout << "Case #" << tc << ": " << A << " " << B << "\n";
	}
	return 0;
}