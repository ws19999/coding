#include <iostream>
#include <queue>
using namespace std;
int arr[1000001];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int A, K;
	cin >> A >> K;
	if (A == K)
	{
		cout << 0;
		return 0;
	}
	queue<int> 큐;
	큐.push(A);
	while (!arr[K])
	{
		int num = 큐.front();
		큐.pop();
		if (num * 2 <= K)
		{
			if (!arr[num * 2])
			{
				arr[num * 2] = arr[num] + 1;
				큐.push(num * 2);
			}
		}
		if (!arr[num + 1]) 
		{
			arr[num + 1] = arr[num] + 1;
			큐.push(num + 1);
		}
	}
	cout << arr[K];
	return 0;
}