#include <iostream>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int Q;
	cin >> Q;
	for (int i = 0; i < Q; i++)
	{
		unsigned long long a, b;
		cin >> a >> b;
		if (b % a)cout << 0;
		else if (b >= 2 * a)cout << 1;
		else cout << 0;
		cout << "\n";
	}
	return 0;
}
