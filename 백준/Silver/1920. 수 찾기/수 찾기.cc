#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int A[100000],N,M,start,end,middle,temp;
	cin >> N;
	for (int i = 0; i < N; i++)cin >> A[i];
	sort(A, A + N);
	cin >> M;
	while (M--)
	{
		bool find = false;
		cin >> temp;
		start = 0;
		end = N - 1;
		while (start <= end)
		{
			middle = (start + end) / 2;
			if (A[middle] < temp)
			{
				start = middle + 1;
			}
			else if (A[middle] > temp)
			{
				end = middle - 1;
			}
			else
			{
				find = true;
				break;
			}
		}
		if (find)cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}