#include <iostream>
#include <deque>
using namespace std;
deque<int> ground_dodo, ground_suyoun, dodo, suyoun;
void dododo(){
	while (!ground_suyoun.empty()) {
		dodo.push_front(ground_suyoun.front());
		ground_suyoun.pop_front();
	}
	while (!ground_dodo.empty()) {
		dodo.push_front(ground_dodo.front());
		ground_dodo.pop_front();
	}
}
string HalliGalli(int M) {
	for (int t = 1; t <= M; t++) {
		if (t % 2 == 1) {
			ground_dodo.push_back(dodo.back());
			dodo.pop_back();
		}
		else {
			ground_suyoun.push_back(suyoun.back());
			suyoun.pop_back();
		}
		if (dodo.empty()) {
			return "su";
		}
		if (suyoun.empty()) {
			return "do";
		}
		if (!ground_dodo.empty() and !ground_suyoun.empty()) {
			if (ground_dodo.back() + ground_suyoun.back() == 5) {
				while (!ground_dodo.empty()) {
					suyoun.push_front(ground_dodo.front());
					ground_dodo.pop_front();
				}
				while (!ground_suyoun.empty()) {
					suyoun.push_front(ground_suyoun.front());
					ground_suyoun.pop_front();
				}
				continue;
			}
		}
		if (!ground_dodo.empty()) {
			if (ground_dodo.back() == 5) {
				dododo();
				continue;
			}
		}
		if (!ground_suyoun.empty()) {
			if (ground_suyoun.back() == 5) {
				dododo();
				continue;
			}
		}
	}
	if (dodo.size() > suyoun.size())return "do";
	else if (dodo.size() < suyoun.size())return "su";
	else return "dosu";
}
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;
		dodo.push_back(a);
		suyoun.push_back(b);
	}
	cout << HalliGalli(M);
	return 0;
}