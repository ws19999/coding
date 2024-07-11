#include <iostream>
using namespace std;
int table[50001];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N,answer=0;
	cin >> N;
	for (int i = 1; i <= N; i++)cin >> table[i];
	for (int i = 1; i <= N; i++) if (table[i] >= table[i - 1] and table[i] >= table[i + 1])cout << i << "\n";
	return 0;
}