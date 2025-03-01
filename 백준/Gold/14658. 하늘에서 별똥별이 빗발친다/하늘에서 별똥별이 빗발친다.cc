#include <iostream>
#include <vector>
using namespace std;
vector<pair<int, int>> vec;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N, M, L, K,ans=0;
	cin >> N >> M >> L >> K;
	for (int i = 0; i < K; i++)
	{
		int a, b;
		cin >> a >> b;
		vec.push_back(make_pair(a, b));
	}
	for (int i = 0; i < K; i++) {
		for (int j = 0; j < K; j++) {
			int x = vec[i].first;
			int y = vec[j].second;
			int cnt = 0;
			for (int k = 0; k < K; k++){
				int nx = vec[k].first;
				int ny = vec[k].second;
				if (nx >= x && nx <= x + L && ny >= y && ny <= y + L)cnt++;
			}
			ans = max(ans, cnt);
		}
	}
	cout << K-ans;
	return 0;
}