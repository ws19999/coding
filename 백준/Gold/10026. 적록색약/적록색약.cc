#include <iostream>
#include <deque>
using namespace std;
int dx[] = { -1,0,1,0 };
int dy[] = { 0,-1,0,1 };
int N;
char map[100][100];
int find()
{
	int cnt = 0;
	bool check[100][100] = { false };
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (!check[i][j])
			{
				cnt += 1;
				check[i][j] = true;
				deque<pair<int, int>> dq;
				dq.push_back(make_pair(i, j));
				while (!dq.empty())
				{
					int x = dq.front().first;
					int y = dq.front().second;
					dq.pop_front();
					for (int k = 0; k < 4; k++)
					{
						int nextx = x + dx[k];
						int nexty = y + dy[k];
						if (nextx >= 0 && nextx < N && nexty >= 0 && nexty < N)
						{
							if (!check[nextx][nexty] && map[nextx][nexty]==map[x][y])
							{
								check[nextx][nexty] = true;
								dq.push_back(make_pair(nextx, nexty));
							}
						}
					}
				}
			}
		}
	}
	return cnt;
}
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> map[i][j];
		}
	}
	cout << find()<<" ";
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (map[i][j] == 'G')map[i][j] = 'R';
		}
	}
	cout << find();
	return 0;
}