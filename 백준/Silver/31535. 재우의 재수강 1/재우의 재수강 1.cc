#include <iostream>
using namespace std;
int line[101];
int density[101];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int w, h;
	cin >> w >> h;
	int n, d,answer=0,lefts=0,rights=0;
	cin >> n >> d;
	for (int i = 1; i <= n; i++)cin >> line[i];
	for (int i = 0; i < n; i++)cin >> density[i];
	density[n] = density[n - 1];
	for (int i = 1; i <= n; i++)
	{
		if (d <= line[i])
		{
			if (!answer)
			{
				answer = min(lefts + density[i - 1] * (d - line[i - 1] + w), lefts + density[i - 1] * (2 * line[i] - line[i - 1] - d) + density[i] * w);
				rights = density[i - 1] * (line[i] - d);
				lefts+= (line[i] - line[i - 1]) * density[i - 1];
			}
			else
			{
				lefts += (line[i] - line[i - 1]) * density[i - 1];
				rights += (line[i] - line[i - 1]) * density[i - 1];
				answer = min(answer, lefts + rights + density[i]* w);
			}
		}
		else
		{
			lefts += (line[i] - line[i - 1]) * density[i - 1];
		}
	}
	cout << answer;
	return 0;
}