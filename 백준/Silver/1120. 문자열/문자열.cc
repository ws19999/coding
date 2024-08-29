#include <iostream>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string A, B;
	cin >> A >> B;
	int alen = A.length();
	int blen = B.length();
	int answer = 50;
	for (int i = 0; i <= blen - alen; i++)
	{
		int temp = 0;
		for (int j = i; j < i + alen; j++)
		{
			if (A[j - i] != B[j])temp++;
		}
		answer = min(answer, temp);
	}
	cout << answer;
	return 0;
}