#include <iostream>
#include <deque>
using namespace std;
int draw[502][502];
int dx[] = { -1,0,1,0 };
int dy[] = { 0,-1,0,1 };
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N, M,cnt=0,sizes=0;
	cin >> N >> M;
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= M; j++)
		{
			cin >> draw[i][j];
		}
	}
	deque<pair<int, int>> dq;
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= M; j++)
		{
			if (draw[i][j])
			{
				cnt++;
				int s = 1;
				draw[i][j] = 0;
				dq.push_back(make_pair(i, j));
				while (!dq.empty())
				{
					int a = dq.front().first;
					int b = dq.front().second;
					dq.pop_front();
					for (int k = 0; k < 4; k++)
					{
						int nextx = a + dx[k];
						int nexty = b + dy[k];
						if (draw[nextx][nexty])
						{
							draw[nextx][nexty] = 0;
							dq.push_back(make_pair(nextx, nexty));
							s++;
						}
					}
				}
				sizes = max(sizes, s);
			}
		}
	}
	cout << cnt << "\n" << sizes;
	return 0;
}