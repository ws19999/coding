#include <iostream>
#include <deque>
#include <tuple>
using namespace std;
int L, R, C;
char building[31][31][31];
int dx[] = {-1,0,1,0,0,0};
int dy[] = {0,-1,0,1,0,0};
int dz[] = {0,0,0,0,-1,1};
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (true)
	{
		cin >> L >> R >> C;
		int answer = 0;
		if (L == 0 and R == 0 and C == 0)break;
		deque<tuple<int, int, int, int>> dq;
		for (int f = 1; f <= L; f++)
		{
			for (int i = 1; i <= R; i++)
			{
				for (int j = 1; j <= C; j++)
				{
					cin >> building[f][i][j];
					if (building[f][i][j] == 'S')
					{
						dq.push_back(make_tuple(f, i, j, 0));
						building[f][i][j] = '#';
					}
				}
			}
		}
		bool escaped = false;
		while (!dq.empty())
		{
			int f = get<0>(dq.front());
			int i = get<1>(dq.front());
			int j = get<2>(dq.front());
			int k = get<3>(dq.front());
			dq.pop_front();
			for (int d = 0; d < 6; d++)
			{
				int nexti = i + dx[d];
				int nextj = j + dy[d];
				int nextf = f + dz[d];
				if (nexti > 0 and nexti <= R and nextj>0 and nextj <= C and nextf>0 and nextf <= L)
				{
					if (building[nextf][nexti][nextj] == '.')
					{
						building[nextf][nexti][nextj] = '#';
						dq.push_back(make_tuple(nextf, nexti, nextj, k + 1));
					}
					else if (building[nextf][nexti][nextj] == 'E')
					{
						answer = k + 1;
						escaped = true;
						break;
					}
				}
			}
			if (escaped)break;
		}
		if (escaped)cout << "Escaped in " << answer << " minute(s).\n";
		else cout << "Trapped!\n";
	}
	return 0;
}