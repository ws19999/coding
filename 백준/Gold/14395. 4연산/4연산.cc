#include <iostream>
#include <unordered_map>
#include <deque>
using namespace std;
unordered_map<long long, pair<int,char>> keys;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int s, t;
	cin >> s >> t;
	if (s == t)
	{
		cout << 0;
		return 0;
	}
	keys[s] = make_pair(0,'0');
	deque<long long> dq;
	dq.push_back(s);
	while (!dq.empty())
	{
		long long num = dq.front();
		dq.pop_front();
		if (!keys[num * num].second and num * num <= t)
		{
			keys[num * num] = make_pair(num,'*');
			if (num * num == t)break;
			dq.push_back(num * num);
		}
		if (!keys[num + num].second and num + num <= t)
		{
			keys[num + num] = make_pair(num, '+');
			if (num + num == t)break;
			dq.push_back(num + num);
		}
		if (!keys[num - num].second)
		{
			keys[num - num] = make_pair(num, '-');
			if (num - num == t)break;
			dq.push_back(num - num);
		}
		if (num == 0)continue;
		if (!keys[num / num].second)
		{
			keys[num / num] = make_pair(num, '/');
			if (num / num == t)break;
			dq.push_back(num / num);
		}
	}
	if (!keys[t].second)
	{
		cout << -1;
		return 0;
	}
	deque<char> answer;
	while (t != s)
	{
		answer.push_front(keys[t].second);
		t = keys[t].first;
	}
	for (auto i : answer)cout << i;
	return 0;
}