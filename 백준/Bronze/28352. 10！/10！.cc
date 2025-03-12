#include <iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N;
	cin >> N;
	long long ans = 6;
	while (N > 10)ans *= N--;
	cout << ans;
	return 0;
}