#include <iostream>
using namespace std;
struct node {
	int xornum,l,r;
};
node table[2000000];
int l, r,c;
void update(int num) {
	if (table[num].l != table[num].r) {
		table[num * 2].xornum = table[num * 2].xornum ^ table[num].xornum;
		table[num * 2 + 1].xornum = table[num * 2 + 1].xornum ^ table[num].xornum;
		table[num].xornum = 0;
	}
	if (table[num].l >= l && table[num].r <= r) {
		table[num].xornum = table[num].xornum ^ c;
		return;
	}
	if (table[num * 2].r >= l)update(num * 2);
	if (table[num * 2 + 1].l <= r)update(num * 2 + 1);
}
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N,startpos=1;
	cin >> N;
	while (startpos < N)startpos *= 2;
	for (int i = startpos; i < startpos + N; i++) {
		cin>>table[i].xornum;
		table[i].l = i-startpos;
		table[i].r = i-startpos;
	}
	for (int i = startpos + N; i < startpos * 2; i++) {
		table[i].xornum = 0;
		table[i].l = i-startpos;
		table[i].r = i-startpos;
	}
	for (int i = startpos - 1; i >= 1; i--) {
		table[i].xornum = 0;
		table[i].l = table[i * 2].l;
		table[i].r = table[i * 2 + 1].r;
	}
	int m;
	cin >> m;
	while (m--) {
		int t;
		cin >> t;
		if (t == 1) {
			cin >> l >> r >> c;
			update(1);
		}
		else {
			c = 0;
			int a;
			cin >> a;
			l = table[startpos + a].l;
			r = table[startpos + a].r;
			update(1);
			cout << table[startpos + a].xornum << "\n";
		}
	}
	return 0;
}