#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;
vector<pair<int, int>> answers;
int bsearch(int h) {
	int l = 0, r = answers.size() - 1,ans=-1;
	while (l <= r) {
		int m = (l + r) / 2;
		if (answers[m].first > h) r = m - 1;
		else if (answers[m].first < h) {
			l = m + 1;
			ans = m;
		}
		else return m;
	}
	return ans;
}
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	unordered_map<int, int> keys;
	int N, S, H, C;
	cin >> N >> S;
	for (int i = 0; i < N; i++) {
		cin >> H >> C;
		if (keys[H] < C)keys[H] = C;
	}
	vector<pair<int, int>> pictures;
	for (auto i : keys)pictures.push_back(i);
	sort(pictures.begin(), pictures.end());
	for (auto p : pictures) {
		int h = p.first;
		int price = p.second;
		int pos=bsearch(h-S);
		if (pos == -1) {
			if (answers.size() == 0)answers.push_back(p);
			else {
				if (answers.back().second < price)answers.push_back(make_pair(h, price));
			}
		}
		else if(answers.back().second < answers[pos].second + price)answers.push_back(make_pair(h, answers[pos].second + price));
	}
	cout << answers.back().second;
	return 0;
}