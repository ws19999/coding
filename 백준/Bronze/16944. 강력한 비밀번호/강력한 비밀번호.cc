#include <iostream>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	bool lower=false, upper=false, number=false, ez=false;
	int N,ans=0;
	string S;
	cin >> N >> S;
	for (int i = 0; i < N; i++)
	{
		if (S[i] >= 'a' and S[i] <= 'z')lower = true;
		else if (S[i] >= 'A' and S[i] <= 'Z')upper = true;
		else if (S[i] >= '0' and S[i] <= '9')number = true;
		else ez = true;
	}
	if (!lower)ans++;
	if (!upper)ans++;
	if (!number)ans++;
	if (!ez)ans++;
	if (N + ans < 6)cout << 6 - N;
	else cout << ans;
	return 0;
}