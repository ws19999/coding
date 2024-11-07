#include <iostream>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N, S, front=0, back=0,temp=0,ans=100001,sequence[100000];
	cin >> N >> S;
	for (int i = 0; i < N; i++)cin >> sequence[i];
	temp += sequence[back];
	while (true)
	{
		if (temp >= S)
		{
			ans = min(ans, back - front + 1);
			if (front == back)break;
			temp -= sequence[front++];
		}
		else
		{
			back++;
			if (back == N)break;
			temp += sequence[back];
		}
	}
	if (ans == 100001)cout << 0;
	else cout << ans;
	return 0;
}