#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>
#include <tuple>
using namespace std;
unordered_map<int, int> keys;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		int A;
		cin >> A;
		keys[A] = i;
	}
	vector<tuple<int, int,int>> vec;
	for (int i = 1; i <= N; i++)
	{
		int B;
		cin >> B;
		vec.push_back(make_tuple(keys[B]-i, -i,B));
	}
	sort(vec.begin(), vec.end());
	cout << get<2>(vec.back())<<" ";
	for (int i = N - 2; i >= 0; i--)
	{
		if (get<0>(vec[i]) < get<0>(vec.back()))break;
		cout << get<2>(vec[i]) << " ";
	}
	return 0;
}