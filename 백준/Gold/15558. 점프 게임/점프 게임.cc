#include <iostream>
#include <deque>
#include <tuple>
using namespace std;
bool check[2][100000];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N, k;
	cin >> N >> k;
	deque<tuple<int, int, int>> dq; //줄번, 칸, 시간
	string lines[2];
	for (int i = 0; i < 2; i++)cin >> lines[i];
	dq.push_back(make_tuple(0, 0, 0));
	check[0][0] = true;
	int answer = 0;
	while (!dq.empty())
	{
		int 줄 = get<0>(dq.front());
		int 칸 = get<1>(dq.front());
		int 시간 = get<2>(dq.front());
		dq.pop_front();
		if (칸 == N - 1)
		{
			answer = 1;
			break;
		}
		if (lines[줄][칸 + 1] == '1' and !check[줄][칸 + 1])
		{
			dq.push_back(make_tuple(줄, 칸 + 1, 시간 + 1));
			check[줄][칸 + 1] = true;
		}
		if (칸 - 1 >= 시간 + 1 and lines[줄][칸 - 1] == '1' and !check[줄][칸 - 1])
		{
			dq.push_back(make_tuple(줄, 칸 - 1, 시간 + 1));
			check[줄][칸 - 1] = true;
		}
		if (칸 + k >= N)
		{
			answer = 1;
			break;
		}
		if (lines[1-줄][칸 + k] == '1' and !check[1-줄][칸 + k])
		{
			dq.push_back(make_tuple(1-줄, 칸 + k, 시간 + 1));
			check[1-줄][칸 + k] = true;
		}
	}
	cout << answer;
	return 0;
}