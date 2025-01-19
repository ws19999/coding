#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string S;
	cin >> S;
	vector<string> vec;
	string s = "";
	for (int i = S.length() - 1; i >= 0; i--) {
		s = S[i] + s;
		vec.push_back(s);
	}
	sort(vec.begin(), vec.end());
	for (auto i : vec)cout << i << "\n";
	return 0;
}