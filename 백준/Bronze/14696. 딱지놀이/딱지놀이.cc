#include <iostream>
using namespace std;
int A[5];
int B[5];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		for (int j = 1; j <= 4; j++)
		{
			A[j] = 0;
			B[j] = 0;
		}
		int k;
		cin >> k;
		for (int a = 0; a < k; a++)
		{
			int num;
			cin >> num;
			A[num]++;
		}
		cin >> k;
		for (int a = 0; a < k; a++)
		{
			int num;
			cin >> num;
			B[num]++;
		}
		if (A[4] > B[4])cout <<"A\n";
		else if (B[4] > A[4] or B[3] > A[3])cout <<"B\n";
		else if (A[3] > B[3] or A[2] > B[2])cout <<"A\n";
		else if (B[2] > A[2] or B[1] > A[1])cout <<"B\n";
		else if (A[1] > B[1])cout <<"A\n";
		else cout << "D\n";
	}
	return 0;
}