#include <iostream>
#include <unordered_map>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	unordered_map<int, pair<int, int>> keyboard;
	for (char c = 'A'; c <= 'Z'; c++) {
		int a, b;
		if (c == 'A') {
			a = 1;
			b = 0;
		}
		if (c == 'B') {
			a = 2;
			b = 4;
		}
		if (c == 'C') {
			a = 2;
			b = 2;
		}
		if (c == 'D') {
			a = 1;
			b = 2;
		}
		if (c == 'E') {
			a = 0;
			b = 2;
		}
		if (c == 'F') {
			a = 1;
			b = 3;
		}
		if (c == 'G') {
			a = 1;
			b = 4;
		}
		if (c == 'H') {
			a = 1;
			b = 5;
		}
		if (c == 'I') {
			a = 0;
			b = 7;
		}
		if (c == 'J') {
			a = 1;
			b = 6;
		}
		if (c == 'K') {
			a = 1;
			b = 7;
		}
		if (c == 'L') {
			a = 1;
			b = 8;
		}
		if (c == 'M') {
			a = 2;
			b = 6;
		}
		if (c == 'N') {
			a = 2;
			b = 5;
		}
		if (c == 'O') {
			a = 0;
			b = 8;
		}
		if (c == 'P') {
			a = 0;
			b = 9;
		}
		if (c == 'Q') {
			a = 0;
			b = 0;
		}
		if (c == 'R') {
			a = 0;
			b = 3;
		}
		if (c == 'S') {
			a = 1;
			b = 1;
		}
		if (c == 'T') {
			a = 0;
			b = 4;
		}
		if (c == 'U') {
			a = 0;
			b = 6;
		}
		if (c == 'V') {
			a = 2;
			b = 3;
		}
		if (c == 'W') {
			a = 0;
			b = 1;
		}
		if (c == 'X') {
			a = 2;
			b = 1;
		}
		if (c == 'Y') {
			a = 0;
			b = 5;
		}
		if (c == 'Z') {
			a = 2;
			b = 0;
		}
		keyboard[c] = make_pair(a, b);
	}
	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		string str;
		cin >> str;
		int len = str.length();
		int answer = len;
		for (int i = 0; i < len-1; i++) {
			int a = keyboard[str[i]].first;
			int b = keyboard[str[i]].second;
			int c = keyboard[str[i+1]].first;
			int d = keyboard[str[i+1]].second;
			if ((a == c or d == b) or (a>c and d<b) or (a<c and d>b))answer += 2 * (abs(a - c) + abs(b - d));
			else answer += 2 * max(abs(a - c), abs(b - d));
		}
		cout << answer << "\n";
	}
	return 0;
}