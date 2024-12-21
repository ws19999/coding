#include <iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N,arr[100000];
	long long num1 = 0, num2 = 0;
	cin >> N;
	for (int i = 0; i < N; i++)cin >> arr[i];
	for (int i = 0; i < N; i += 2)num1 += arr[i];
	for (int i = 1; i < N; i += 2)num2 += arr[i];
	if (num1 == num2) {
		cout << 0;
		return 0;
	}
	if (N == 3 and num1 > num2) {
		cout << -1;
		return 0;
	}
	else cout << abs(num1 - num2);
	return 0;
}