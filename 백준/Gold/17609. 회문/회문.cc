#include <iostream>
using namespace std;
string str;
int is_palindrome(int l,int r,int depth) {
	while (l < r) {
		if (str[l] == str[r]) {
			l++;
			r--;
		}
		else {
			if (depth == 1)return 1;
			if (str[l + 1] == str[r] && !is_palindrome(l + 1, r,1))return 1;
			if (str[r - 1] == str[l] && !is_palindrome(l, r - 1, 1))return 1;
			return 2;
		}
	}
	return 0;
}
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int T;
	cin >> T;
	for (int tc = 0; tc < T; tc++)
	{
		cin >> str;
		cout << is_palindrome(0, str.length() - 1,0) << "\n";
	}
	return 0;
}