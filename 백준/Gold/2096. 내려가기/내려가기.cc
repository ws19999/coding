#include <iostream>
#include <deque>
using namespace std;
int N,line[3];
deque<int> high;
deque<int> low;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	for (int i = 0; i < 3; i++)
	{
		high.push_back(0);
		low.push_back(0);
	}
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 3; j++)cin >> line[j];
		high.push_back(max(high[0] + line[0], high[1] + line[0]));
		int temp = max(high[0], high[1]);
		temp = max(temp, high[2]);
		high.push_back(temp + line[1]);
		high.push_back(max(high[1] + line[2], high[2] + line[2]));
		low.push_back(min(low[0] + line[0], low[1] + line[0]));
		temp = min(low[0], low[1] );
		temp = min(temp, low[2]);
		low.push_back(temp + line[1]);
		low.push_back(min(low[1] + line[2], low[2] + line[2]));
		for (int j = 0; j < 3; j++)
		{
			high.pop_front();
			low.pop_front();
		}
	}
	int maxscore = high[0], minscore = low[0];
	for (int i = 1; i < 3; i++)
	{
		maxscore = max(maxscore, high[i]);
		minscore = min(minscore, low[i]);
	}
	cout << maxscore << " " << minscore;
	return 0;
}