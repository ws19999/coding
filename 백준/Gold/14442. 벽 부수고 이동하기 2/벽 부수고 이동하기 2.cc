#include <iostream>
#include <deque>
using namespace std;
typedef struct point
{
	int x=0,y=0, time=1, crushed = 1;
}point;
int table[1000][1000];
int dx[] = { -1,0,1,0 };
int dy[] = { 0,-1,0,1 };
char map[1000][1000];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N, M,K;
	cin >> N >> M>>K;
	K++;
	N--;
	M--;
	for (int i = 0; i <= N; i++)
	{
		for (int j = 0; j <= M; j++)
		{
			cin >> map[i][j];
		}
	}
	point x;
	deque<point> dq;
	int time = -1;
	dq.push_back(x);
	table[0][0] = 1;
	while (dq.size())
	{
		x = dq.front();
		dq.pop_front();
		if (table[x.x][x.y] < x.crushed)continue;
		if (x.x == N && x.y == M)
		{
			time = x.time;
			break;
		}
		for (int i = 0; i < 4; i++)
		{
			point n;
			n.x = x.x + dx[i];
			n.y = x.y + dy[i];
			if (n.x<0 || n.x>N || n.y<0 || n.y>M)continue;
			if (table[n.x][n.y] <= x.crushed && table[n.x][n.y]>0)continue;
			n.crushed = x.crushed;
			if (map[n.x][n.y] == '1')
			{
				if (x.crushed == K)continue;
				n.crushed++;
			}
			table[n.x][n.y] = n.crushed;
			n.time = x.time + 1;
			dq.push_back(n);
		}
	}
	cout <<time;
	return 0;
}