#include <iostream>
using namespace std;
struct node {
	bool used=false;
	int cnt = 0;
	int children[26] = { 0 };
};
node table[1000002];
int ncnt = 1;
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N,cnt=0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string nickname,alias="";
		bool making_alias = true;
		cin >> nickname;
		int pos = 0;
		cnt = 0;
		for (auto c : nickname) {
			if (making_alias)alias += c;
			if (!table[pos].children[c - 97]) {
				table[pos].children[c - 97] = ncnt++;
			}
			pos = table[pos].children[c - 97];
			if (table[pos].used == false) {
				table[pos].used = true;
				making_alias = false;
			}
		}
		table[pos].cnt++;
		if (making_alias) {
			if (table[pos].cnt > 1)cnt = table[pos].cnt;
		}
		cout << alias;
		if (cnt)cout << cnt;
		cout << "\n";
	}
	return 0;
}