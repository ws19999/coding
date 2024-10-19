#include <iostream>
using namespace std;
int origin[100][100];
int turned[100][100];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0);
	int R, C;
	cin >> R >> C;
	for (int i = 0; i < C; i++)
	{
		for (int j = 0; j < R; j++)
		{
			cin >> turned[i][j];
		}
	}
	bool same = true;
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			cin >> origin[i][j];
			if (origin[i][j] != turned[C-1-j][i])same = false;
		}
	}
	if (same)
	{
		cout << "|>___/|        /}\n| O < |       / }\n(==0==)------/ }\n| ^  _____    |\n|_|_/     ||__|";
	}
	else
	{
		cout << "|>___/|     /}\n| O O |    / }\n( =0= )\"\"\"\"  \\\n| ^  ____    |\n|_|_/    ||__| ";
	}
	return 0;
}