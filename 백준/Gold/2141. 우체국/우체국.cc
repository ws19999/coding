#include <iostream>
#include <climits>
#include <algorithm>
#include <map>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N,answer=0;
	cin >> N;
	long long total = 0,temp=0;
	map<int, long long> village;
	for (int i = 0; i < N; i++)
	{
		int x;
		long long a;
		cin >> x >> a;
		village[x] = a;
		total += a;
	}
	long long mid = total / 2;
	if (total % 2 == 1)mid++;
	for (auto v : village)
	{
		temp += v.second;
		answer = v.first;
		if (temp >= mid)break;
	}
	cout << answer;
	return 0;
}