#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <deque>
using namespace std;
int N,ans=0,num=9;
string nums[10];
unordered_map<char, int> keys;
deque<int> dq;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> nums[i];
		int temp = 1;
		for (int j = nums[i].length() - 1; j >= 0; j--)
		{
			keys[nums[i][j]] += temp;
			temp *= 10;
		}
	}
	for (auto k : keys)dq.push_back(k.second);
	sort(dq.begin(), dq.end());
	int s = dq.size();
	for (int i = s-1; i >=0; i--)ans += num-- * dq[i];
	cout << ans;
	return 0;
}