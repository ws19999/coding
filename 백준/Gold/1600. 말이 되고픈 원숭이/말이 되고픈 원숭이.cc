#include <iostream>
#include <deque>
using namespace std;
int dx[] = { -1,0,1,0,-2,-2,-1,1,2,2,1,-1 };
int dy[] = { 0,-1,0,1,-1,1,2,2,1,-1,-2,-2 };
typedef struct monkey
{
	int Horse;
	int x = 0;
	int y = 0;
}Monkey;
typedef struct map
{
	int x, horse = -1,time=-1;
}Map;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int K, W, H;
	Map map[200][200];
	cin >> K >> W >> H;
	Monkey monkey;
	monkey.Horse = K;
	for (int i = 0; i < H; i++)
	{
		for (int j = 0; j < W; j++)
		{
			cin >> map[i][j].x;
		}
	}
	deque<Monkey> dq;
	deque<int> time;
	dq.push_back(monkey);
	time.push_back(0);
	while (dq.size())
	{
		Monkey m = dq.front();
		dq.pop_front();
		int t = time.front();
		time.pop_front();
		if (map[m.x][m.y].horse >= m.Horse)continue;
		map[m.x][m.y].horse = m.Horse;
		map[m.x][m.y].time = t;
		if (m.x == H - 1 && m.y == W - 1)break;
		Monkey nm;
		if (m.Horse)
		{
			for (int i = 4; i < 12; i++)
			{
				nm.x = m.x + dx[i];
				nm.y = m.y + dy[i];
				nm.Horse = m.Horse - 1;
				if (nm.x < 0 || nm.x >= H || nm.y < 0 || nm.y >= W)continue;
				if (map[nm.x][nm.y].x || map[nm.x][nm.y].horse>=nm.Horse)continue;
				dq.push_back(nm);
				time.push_back(t + 1);
			}
		}
		for (int i = 0; i < 4; i++)
		{
			nm.x = m.x + dx[i];
			nm.y = m.y + dy[i];
			nm.Horse = m.Horse;
			if (nm.x < 0 || nm.x >= H || nm.y < 0 || nm.y >= W)continue;
			if (map[nm.x][nm.y].x || map[nm.x][nm.y].horse >= nm.Horse)continue;
			dq.push_back(nm);
			time.push_back(t + 1);
		}
	}
	cout << map[H - 1][W - 1].time;
	return 0;
}