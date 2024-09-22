#include <iostream>
#include <algorithm>
using namespace std;
int N, M;
int arr[100000];
int bsearch(int num, bool t)
{
	int 시작 = 0,끝=N-1;
	int p=-1;
	while (시작 <= 끝)
	{
		int mid = (시작 + 끝) / 2;
		if (t)
		{
			if (arr[mid] >= num)
			{
				p = mid;
				끝 = mid - 1;
			}
			else 시작 = mid + 1;
		}
		else
		{
			if (arr[mid] <= num)
			{
				p = mid;
				시작 = mid + 1;
			}
			else 끝 = mid - 1;
		}
	}
	return p;
}
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> N >> M;
	for (int i = 0; i < N; i++)cin >> arr[i];
	sort(arr, arr + N);
	for (int tc = 1; tc <= M; tc++)
	{
		int 시작점, 끝점;
		cin >> 시작점 >> 끝점;
		if (시작점 > 끝점)
		{
			int temp = 시작점;
			시작점 = 끝점;
			끝점 = temp;
		}
		int a = bsearch(시작점, true);
		int b = bsearch(끝점, false);
		if (a == -1 or b == -1)cout << "0\n";
		else cout << b - a + 1<<"\n";
	}
	return 0;
}