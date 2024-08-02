#include <iostream>
#include <vector>
#include <tuple>
#include <climits>
using namespace std;
int w, h,cnt=0,answer=INT_MAX;
vector<vector<int>> vec(10,vector<int>(10));
vector<tuple<char, int, int>> chess;
int dkx[] = { -1,-1,-1,0,1,1,1,0 };
int dky[] = { -1,0,1,1,1,0,-1,-1 };
int dbx[] = { -1,-1,1,1 };
int dby[] = { -1,1,1,-1 };
int drx[] = { -1,0,1,0 };
int dry[] = { 0,-1,0,1 };
int dnx[] = { -2,-2,-1,1,2,2,1,-1 };
int dny[] = { -1,1,2,2,1,-1,-2,-2 };
void dfs(vector<vector<int>> check,int pos,int depth,int totals)
{
	char temp = get<0>(chess[pos]);
	int x = get<1>(chess[pos]);
	int y = get<2>(chess[pos]);
	int nextx, nexty;
	totals -= check[x][y];
	check[x][y] = 0;
	if (temp == 'K')
	{
		for (int k = 0; k < 8; k++)
		{
			nextx = x + dkx[k];
			nexty = y + dky[k];
			if (nextx >= 0 and nextx < h and nexty >= 0 and nexty < w)
			{
				if (check[nextx][nexty])
				{
					check[nextx][nexty]--;
					totals--;
				}
			}
		}
	}
	else if (temp == 'Q')
	{
		for (int k = 0; k < 8; k++)
		{
			nextx = x + dkx[k];
			nexty = y + dky[k];
			while (true)
			{
				if (nextx >= 0 and nextx < h and nexty >= 0 and nexty < w)
				{
					if (check[nextx][nexty])
					{
						check[nextx][nexty]--;
						totals--;
					}
				}
				else break;
				nextx += dkx[k];
				nexty += dky[k];
			}
		}
	}
	else if (temp == 'B')
	{
		for (int k = 0; k < 4; k++)
		{
			nextx = x + dbx[k];
			nexty = y + dby[k];
			while (true)
			{
				if (nextx >= 0 and nextx < h and nexty >= 0 and nexty < w)
				{
					if (check[nextx][nexty])
					{
						check[nextx][nexty]--;
						totals--;
					}
				}
				else break;
				nextx += dbx[k];
				nexty += dby[k];
			}
		}
	}
	else if (temp == 'R')
	{
		for (int k = 0; k < 4; k++)
		{
			nextx = x + drx[k];
			nexty = y + dry[k];
			while (true)
			{
				if (nextx >= 0 and nextx < h and nexty >= 0 and nexty < w)
				{
					if (check[nextx][nexty])
					{
						check[nextx][nexty]--;
						totals--;
					}
				}
				else break;
				nextx += drx[k];
				nexty += dry[k];
			}
		}
	}
	else if (temp == 'N')
	{
		for (int k = 0; k < 8; k++)
		{
			nextx = x + dnx[k];
			nexty = y + dny[k];
			if (nextx >= 0 and nextx < h and nexty >= 0 and nexty < w)
			{
				if (check[nextx][nexty])
				{
					check[nextx][nexty]--;
					totals--;
				}
			}
		}
	}
	if (totals == 0)
	{
		answer = min(answer, depth);
		return;
	}
	if (depth >= answer - 1)return;
	for (int i = pos + 1; i < cnt; i++)
	{
		dfs(check, i, depth + 1, totals);
	}
}
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	char table[10][10];
	while (true)
	{
		string str;
		cin >> str;
		if (cin.fail())break;
		chess.clear();
		int totals = 0;
		answer = INT_MAX;
		cin >> w >> h;
		cnt = 0;
		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < w; j++)vec[i][j] = 0;
		}
		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < w; j++)
			{
				cin >> table[i][j];
				if (table[i][j] != 'E')
				{
					chess.push_back(make_tuple(table[i][j], i, j));
					cnt++;
				}
			}
		}
		for (auto c : chess)
		{
			char temp = get<0>(c);
			int x = get<1>(c);
			int y = get<2>(c);
			int nextx, nexty;
			if (temp == 'K')
			{
				for (int k = 0; k < 8; k++)
				{
					nextx = x + dkx[k];
					nexty = y + dky[k];
					if (nextx >= 0 and nextx < h and nexty >= 0 and nexty < w)
					{
						if (table[nextx][nexty] != 'E')
						{
							vec[nextx][nexty]++;
							totals++;
						}
					}
				}
			}
			else if (temp == 'Q')
			{
				for (int k = 0; k < 8; k++)
				{
					nextx = x + dkx[k];
					nexty = y + dky[k];
					while (true)
					{
						if (nextx >= 0 and nextx < h and nexty >= 0 and nexty < w)
						{
							if (table[nextx][nexty] != 'E')
							{
								vec[nextx][nexty]++;
								totals++;
							}
						}
						else break;
						nextx += dkx[k];
						nexty += dky[k];
					}
				}
			}
			else if (temp == 'B')
			{
				for (int k = 0; k < 4; k++)
				{
					nextx = x + dbx[k];
					nexty = y + dby[k];
					while (true)
					{
						if (nextx >= 0 and nextx < h and nexty >= 0 and nexty < w)
						{
							if (table[nextx][nexty] != 'E')
							{
								vec[nextx][nexty]++;
								totals++;
							}
						}
						else break;
						nextx += dbx[k];
						nexty += dby[k];
					}
				}
			}
			else if (temp == 'R')
			{
				for (int k = 0; k < 4; k++)
				{
					nextx = x + drx[k];
					nexty = y + dry[k];
					while (true)
					{
						if (nextx >= 0 and nextx < h and nexty >= 0 and nexty < w)
						{
							if (table[nextx][nexty] != 'E')
							{
								vec[nextx][nexty]++;
								totals++;
							}
						}
						else break;
						nextx += drx[k];
						nexty += dry[k];
					}
				}
			}
			else if (temp == 'N')
			{
				for (int k = 0; k < 8; k++)
				{
					nextx = x + dnx[k];
					nexty = y + dny[k];
					if (nextx >= 0 and nextx < h and nexty >= 0 and nexty < w)
					{
						if (table[nextx][nexty] != 'E')
						{
							vec[nextx][nexty]++;
							totals++;
						}
					}
				}
			}
		}
		if (totals == 0)answer = 0;
		else
		{
			for (int i = 0; i < cnt; i++)
			{
				dfs(vec, i, 1, totals);
			}
		}
		cin >> str;
		cout << "Minimum Number of Pieces to be removed: " << answer << "\n";
	}
	return 0;
}