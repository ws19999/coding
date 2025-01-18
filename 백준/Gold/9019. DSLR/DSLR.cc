#include <iostream>
#include <deque>
using namespace std;
char check[10000];
int table[10000];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++)
	{
		int A, B;
		cin >> A >> B;
		for (int i = 0; i < 10000; i++)check[i] = '.';
		deque<int> dq;
		dq.push_back(A);
		check[A] = '0';
		while (true)
		{
			int num = dq.front();
			dq.pop_front();
			int next = num * 2 % 10000;
			if (check[next] == '.')
			{
				check[next] = 'D';
				table[next] = num;
				if (next == B)break;
				dq.push_back(next);
			}
			if (!num)next = 9999;
			else next = num - 1;
			if (check[next] == '.')
			{
				check[next] = 'S';
				table[next] = num;
				if (next == B)break;
				dq.push_back(next);
			}
			next = num / 1000 + (num % 1000) * 10;
			if (check[next] == '.')
			{
				check[next] = 'L';
				table[next] = num;
				if (next == B)break;
				dq.push_back(next);
			}
			next = num / 10 + (num % 10) * 1000;
			if (check[next] == '.')
			{
				check[next] = 'R';
				table[next] = num;
				if (next == B)break;
				dq.push_back(next);
			}
		}
		deque<char> deq;
		while (B != A)
		{
			deq.push_front(check[B]);
			B = table[B];
		}
		for (auto i : deq)cout << i;
		cout << "\n";
	}
	return 0;
}