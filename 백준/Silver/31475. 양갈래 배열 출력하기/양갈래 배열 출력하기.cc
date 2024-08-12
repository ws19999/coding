#include <iostream>
using namespace std;
int dx[] = { 1,0,-1,0 };
int dy[] = { 0,-1,0,1 };
int table[2000][2000];
int startx, starty, startnum,N,M;
void snail(int dir,int c)
{
	int x = startx;
	int y = starty;
	int num = startnum;
	while (true)
	{
		int nextx = x + dx[dir];
		int nexty = y + dy[dir];
		if (nextx < 0 or nextx >= N or nexty < 0 or nexty >= M)
		{
			dir = (dir + c) % 4;
			nextx = x + dx[dir];
			nexty = y + dy[dir];
			if (nextx < 0 or nextx >= N or nexty < 0 or nexty >= M)break;
			else if (table[nextx][nexty])break;
		}
		else if (table[nextx][nexty])
		{
			dir = (dir + c) % 4;
			nextx = x + dx[dir];
			nexty = y + dy[dir];
			if (nextx < 0 or nextx >= N or nexty < 0 or nexty >= M)break;
			else if (table[nextx][nexty])break;
		}
		x = nextx;
		y = nexty;
		table[x][y] = ++num;
	}
}
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int x,y,dir,num=1;
	cin >> N >> M;
	char s;
	cin >> s;
	if (s == 'U')
	{
		x = 0;
		y = M / 2;
		dir = 0;
	}
	else if (s == 'D')
	{
		x = N - 1;
		y = M / 2;
		dir = 2;
	}
	else if (s == 'L')
	{
		x = N / 2;
		y = 0;
		dir = 3;
	}
	else if (s == 'R')
	{
		x = N / 2;
		y = M - 1;
		dir = 1;
	}
	table[x][y] = num;
	while (true)
	{
		int nextx = x + dx[dir];
		int nexty = y + dy[dir];
		if (nextx < 0 or nextx >= N or nexty < 0 or nexty >= M)
		{
			startx = x;
			starty = y;
			startnum = num;
			break;
		}
		x = nextx;
		y = nexty;
		table[x][y] = ++num;
	}
	if(s=='U' or s=='R')snail((dir + 1) % 4, 1);
	else snail((dir+3)%4, 3);
	if (s == 'U' or s == 'D')
	{
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				if (j > M / 2)cout << table[i][M - 1 - j];
				else cout << table[i][j];
				cout << " ";
			}
			cout << "\n";
		}
	}
	else
	{
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				if (i > N / 2) cout << table[N - 1 - i][j];
				else cout << table[i][j];
				cout << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}