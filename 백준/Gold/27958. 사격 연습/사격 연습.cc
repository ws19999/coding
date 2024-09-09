#include <iostream>
#include <vector>
#include <deque>
using namespace std;
int N,K,answer=0;
int bullets[5];
int inits[8][8];
void dfs(int depth,int score, vector<pair<int,int>> board[8])
{
	if (depth == K)
	{
		answer = max(answer, score);
		return;
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (board[i][j].first)
			{
				if (board[i][j].second >= 10)
				{
					int temp = board[i][j].second;
					board[i][j].second = 0;
					board[i][j].first = 0;
					dfs(depth + 1, score + temp, board);
					board[i][j].second = temp;
					board[i][j].first = temp;
				}
				else if (bullets[depth] >= board[i][j].first)
				{
					int temp1 = board[i][j].first;
					int temp2 = board[i][j].second;
					board[i][j].first = 0;
					board[i][j].second = 0;
					if (temp2>=4)
					{
						int t = temp2 / 4;
						deque<int> dq;
						if (i >= 1)
						{
							if (!board[i - 1][j].second)
							{
								dq.push_back(1);
								board[i - 1][j].first=t;
								board[i - 1][j].second=t;
							}
						}
						if (j >= 1)
						{
							if (!board[i][j - 1].second)
							{
								dq.push_back(2);
								board[i][j - 1].first = t;
								board[i][j - 1].second = t;
							}
						}
						if (i < N - 1)
						{
							if (!board[i + 1][j].second)
							{
								dq.push_back(3);
								board[i + 1][j].first = t;
								board[i + 1][j].second = t;
							}
						}
						if (j < N - 1)
						{
							if (!board[i][j + 1].second)
							{
								dq.push_back(4);
								board[i][j + 1].first = t;
								board[i][j + 1].second = t;
							}
						}
						dfs(depth + 1, score + temp2, board);
						while (!dq.empty())
						{
							if (dq.front() == 1)
							{
								board[i - 1][j].first = 0;
								board[i - 1][j].second = 0;
								dq.pop_front();
							}
							else if (dq.front() == 2)
							{
								board[i][j - 1].first = 0;
								board[i][j - 1].second = 0;
								dq.pop_front();
							}
							else if (dq.front() == 3)
							{
								board[i + 1][j].first = 0;
								board[i + 1][j].second = 0;
								dq.pop_front();
							}
							else
							{
								board[i][j + 1].first = 0;
								board[i][j + 1].second = 0;
								dq.pop_front();
							}
						}
					}
					else dfs(depth + 1, score + temp2, board);
					board[i][j].first = temp1;
					board[i][j].second = temp2;
				}
				else
				{
					board[i][j].first -= bullets[depth];
					dfs(depth + 1, score, board);
					board[i][j].first += bullets[depth];
				}
				break;
			}
		}
	}
}
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> N >> K;
	vector<pair<int,int>> board[8];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> inits[i][j];
			board[i].push_back(make_pair(inits[i][j], inits[i][j]));
		}
	}
	for (int i = 0; i < K; i++)cin >> bullets[i];
	dfs(0, 0, board);
	cout << answer;
	return 0;
}