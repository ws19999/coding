#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	vector<pair<int, int>> vec;
	int w, h;
	cin >> w >> h;
	int num;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		int a, b;
		cin >> a >> b;
		if (a == 1)vec.push_back(make_pair(0, b));
		else if (a == 2)vec.push_back(make_pair(h, b));
		else if (a == 3)vec.push_back(make_pair(b, 0));
		else vec.push_back(make_pair(b, w));
	}
	pair<int,int> 동근;
	int dir, dis;
	cin >> dir >> dis;
	if (dir == 1)
	{
		동근.first = 0;
		동근.second = dis;
	}
	else if (dir == 2)
	{
		동근.first = h;
		동근.second = dis;
	}
	else if (dir == 3)
	{
		동근.first = dis;
		동근.second = 0;
	}
	else {
		동근.first = dis;
		동근.second = w;
	}
	int answer = 0;
	for (auto i : vec)
	{
		if (abs(i.first - 동근.first) == h) answer += h + min(i.second + 동근.second, w - i.second + w - 동근.second);
		else if (abs(i.second - 동근.second) == w) answer += w + min(i.first + 동근.first, h - i.first + h - 동근.first);
		else answer += abs(i.first - 동근.first) + abs(i.second - 동근.second);
	}
	cout << answer;
	return 0;
}