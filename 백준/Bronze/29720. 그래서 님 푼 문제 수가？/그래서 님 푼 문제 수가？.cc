#include <iostream>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, m, k;
	cin >> n >> m >> k;
	if (n - m * k < 0)cout << 0;
	else cout << n - m * k;
	cout<< " " << n - m * (k - 1) - 1;
	return 0;
}