#include <iostream>
#include <queue>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N, H, T;
	cin >> N >> H >> T;
	priority_queue<int> 거인;
	for (int i = 0; i < N; i++) {
		int height;
		cin >> height;
		거인.push(height);
	}
	for (int i = 0; i < T; i++) {
		int height = 거인.top();
		if (height < H) {
			cout << "YES\n" << i;
			return 0;
		}
		if (height == 1)break;
		거인.pop();
		거인.push(height / 2);
	}
	if (거인.top() < H) {
		cout << "YES\n" << T;
		return 0;
	}
	cout << "NO\n" << 거인.top();
	return 0;
}