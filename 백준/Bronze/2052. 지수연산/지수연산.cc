#include <iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N;
	cin >> N;
	cout.precision(N);
	cout << fixed;
	double num = 1;
	for (int i = 0; i < N; i++)num /= 2;
	cout << num;
	return 0;
}