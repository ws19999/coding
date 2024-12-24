#include <iostream>
#include <algorithm>
#include <list>
using namespace std;
list <pair<int, int>> orders;
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		string order;
		cin >> order;
		if (order == "order") {
			int n, t;
			cin >> n >> t;
			orders.push_back(make_pair(t, n));
		}
		else if(order=="sort") {
			orders.sort();
		}
		else {
			int n;
			cin >> n;
			auto i = orders.begin();
			while (true) {
				if ((*i).second == n) {
					orders.erase(i);
					break;
				}
				i++;
			}
		}
		for (auto i : orders)cout << i.second << " ";
		if (orders.empty())cout << "sleep";
		cout << "\n";
	}
}