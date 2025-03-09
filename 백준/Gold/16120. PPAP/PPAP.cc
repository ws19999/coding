#include <iostream>
#include <deque>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string str;
	cin >> str;
	deque<char> dq;
	int sz = 0;
	for (auto i : str) {
		dq.push_back(i);
		sz++;
		while (true) {
			if (sz >= 4) {
				if (dq[sz - 4] == 'P' && dq[sz - 3] == 'P' && dq[sz - 2] == 'A' && dq[sz - 1] == 'P') {
					for (int a = 0; a < 4; a++)dq.pop_back();
					dq.push_back('P');
					sz -= 3;
				}
				else break;
			}
			else break;
		}
	}
	if (sz == 1 && dq[0] == 'P')cout << "PPAP";
	else cout << "NP";
	return 0;
}