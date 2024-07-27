#include <iostream>
#include <deque>
#include <tuple>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int C;
	cin >> C;
	for (int i = 0; i < C; i++)
	{
		int S, T;
		cin >> S >> T;
		deque<tuple<int, int, int>> dq;
		dq.push_back(make_tuple(S, T, 0));
		while (!dq.empty())
		{
			S = get<0>(dq.front());
			T = get<1>(dq.front());
			int num = get<2>(dq.front());
			if (S == T)
			{
				cout << num << "\n";
				break;
			}
			dq.pop_front();
			if (S > T)continue;
			dq.push_back(make_tuple(S + 1, T, num + 1));
			dq.push_back(make_tuple(S * 2, T + 3, num + 1));
		}
	}
	return 0;
}