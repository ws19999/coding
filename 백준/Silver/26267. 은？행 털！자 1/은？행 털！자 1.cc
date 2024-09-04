#include <iostream>
#include <unordered_map>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N;
	long long answer = 0;
	cin >> N;
	unordered_map<int, long long> keys;
	for (int i = 0; i < N; i++)
	{
		int x, t, c;
		cin >> x >> t >> c;
		keys[t - x] += c;
	}
	for (auto i : keys)answer = max(answer, i.second);
	cout << answer;
	return 0;
}