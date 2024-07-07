#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	vector<pair<int, int>> vec;
	int N,answer=0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int num, penalty;
		cin >> num >> penalty;
		vec.push_back(make_pair(-num, penalty));
	}
	sort(vec.begin(),vec.end());
	for (int i = 5; i < N; i++)
	{
		if (vec[i].first == vec[4].first)answer++;
		else break;
	}
	cout << answer;
	return 0;
}