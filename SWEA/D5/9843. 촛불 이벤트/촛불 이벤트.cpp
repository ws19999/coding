#include<iostream>
using namespace std;
long long N;
long long bsearch() {
    __int128 l = 1, r = N;
    while (l <= r) {
        __int128 mid = (l + r) / 2;
        __int128 val = (mid * (mid + 1)) / 2;
        if (N < val)
            r = mid - 1;
        else if (N > val)
            l = mid + 1;
        else
            return long(mid);
    }
    return -1;
}
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	register int test_case;
	register int T;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> N;
		cout << "#" << test_case << " " << bsearch() << "\n";
	}
	return 0;
}