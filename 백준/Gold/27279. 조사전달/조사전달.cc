#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N, M,answer[100000],사역[100000];
	cin >> N >> M;
	for (int i = 0; i < N; i++)cin >> answer[i];
	for (int i = 0; i < M; i++)cin >> 사역[i];
	sort(사역, 사역 + M);
	sort(answer, answer + N);
	int j = 0;
	for (int i = 0; i<N; i++)
	{
		if (j >= answer[i])continue;
		사역[j]--;
		if (!사역[j])j++;
		if (j >= M)break;
	}
	if (사역[M - 1])cout << "NO";
	else cout << "YES";
	return 0;
}