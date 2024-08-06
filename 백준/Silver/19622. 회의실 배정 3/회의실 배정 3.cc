#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>
#include <tuple>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	unordered_map<int, int> table;
	int N,answer=0;
	cin >> N;
	vector<tuple<int, int, int>> meetings;
	for (int i = 0; i < N; i++)
	{
		int s, e, m;
		cin >> s >> e >> m;
		meetings.push_back(make_tuple(s, e, m));
	}
	sort(meetings.begin(), meetings.end());
	for (int i = 0; i < N; i++)
	{
		if (i == 0)
		{
			table[get<1>(meetings[i])] = get<2>(meetings[i]);
		}
		else if (i == 1)
		{
			if (get<0>(meetings[i]) < get<1>(meetings[i - 1]))
			{
				table[get<1>(meetings[i])] = get<2>(meetings[i]);
			}
			else
			{
				table[get<1>(meetings[i])] = get<2>(meetings[i]) + table[get<1>(meetings[i - 1])];
			}
		}
		else if (i == 2)
		{
			if (get<0>(meetings[i]) < get<1>(meetings[i - 1]))
			{
				table[get<1>(meetings[i])] = get<2>(meetings[i])+ table[get<1>(meetings[i - 2])];
			}
			else
			{
				table[get<1>(meetings[i])] = get<2>(meetings[i]) + max(table[get<1>(meetings[i - 1])], table[get<1>(meetings[i - 2])]);
			}
		}
		else
		{
			if (get<0>(meetings[i]) < get<1>(meetings[i - 1]))
			{
				table[get<1>(meetings[i])] = get<2>(meetings[i])+ max(table[get<1>(meetings[i - 3])], table[get<1>(meetings[i - 2])]);
			}
			else
			{
				table[get<1>(meetings[i])] = get<2>(meetings[i]) + max(table[get<1>(meetings[i - 1])], table[get<1>(meetings[i - 2])]);
			}
		}
		answer = max(answer, table[get<1>(meetings[i])]);
	}
	cout << answer;
	return 0;
}