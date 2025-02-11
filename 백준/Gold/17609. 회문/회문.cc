#include <iostream>
using namespace std;
string str;
int l, r;
bool is_palindrome() {
	int ltemp = l;
	int rtemp = r;
	while (ltemp < rtemp) {
		if (str[ltemp] == str[rtemp]) {
			ltemp++;
			rtemp--;
		}
		else {
			l = ltemp;
			r = rtemp;
			return false;
		}
	}
	return true;
}
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int T;
	cin >> T;
	for (int tc = 0; tc < T; tc++)
	{
		cin >> str;
		l = 0;
		r = str.length() - 1;
		if(is_palindrome())cout<<0<<"\n";
		else {
			int ll = l;
			int rr = r;
			l++;
			if (is_palindrome())cout << 1 << "\n";
			else {
				l = ll;
				r = rr - 1;
				if (is_palindrome())cout << 1 << "\n";
				else cout << 2 << "\n";
			}
		}
	}
	return 0;
}