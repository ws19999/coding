#include <iostream>
using namespace std;
long long gcd(long long a, long long b) {
	if (a == 0) return b;
	return gcd(b % a, a);
}

long long lcm(long long a, long long b) {
	return (a * b) / gcd(a, b);
}
int table[31];
int attractions[10001];
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N, M;
	cin >> N >> M;
	for (int i = 1; i <= M; i++) {
		cin >> attractions[i];
		table[attractions[i]]++;
	}
	long long lcmm = 1;
	for (long long i = 2; i <= 30; i++) {
		if (table[i])lcmm = lcm(lcmm, i);
	}
	long long temp = 0;
	for (long long i = 1; i <= 30; i++) {
		temp += lcmm / i * (table[i]);
	}
	N %= temp;
	if (N == 0)N = temp;
	if (N <= M) {
		cout << N;
		return 0;
	}
	else {
		N -= M;
		int t = 0;
		while (true) {
			t++;
			int cnt = 0;
			for (int i = 1; i <= 30; i++) {
				if (t % i == 0)cnt += table[i];
			}
			if (N <= cnt) {
				for (int i = 1; i <= M; i++) {
					if (!(t%attractions[i]))N--;
					if (!N) {
						cout << i;
						return 0;
					}
				}
			}
			else N -= cnt;
		}
	}
}