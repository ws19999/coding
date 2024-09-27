#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	vector<pair<int, int>> block;
	int w, h,answer=0,num;
	cin >> w >> h >> num;
	for (int i = 0; i <= num; i++)
	{
		int a, b;
		cin >> a >> b;
		if (a == 1)block.push_back(make_pair(0, b));
		else if (a == 2)block.push_back(make_pair(h, b));
		else if (a == 3)block.push_back(make_pair(b, 0));
		else block.push_back(make_pair(b, w));
	}
	for (int i=0;i<num;i++)
	{
		if (abs(block[i].first - block[num].first) == h) answer += h + min(block[i].second + block[num].second, 2*w - block[i].second - block[num].second);
		else if (abs(block[i].second - block[num].second) == w) answer += w + min(block[i].first + block[num].first, 2*h - block[i].first - block[num].first);
		else answer += abs(block[i].first - block[num].first) + abs(block[i].second - block[num].second);
	}
	cout << answer;
	return 0;
}