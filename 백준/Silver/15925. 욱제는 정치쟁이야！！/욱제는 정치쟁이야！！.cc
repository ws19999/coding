#include <iostream>
using namespace std;
int garo[31];
int sero[31];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N,nextclass,totalcnt=0;
	cin >> N>>nextclass;
	int table[31][31];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> table[i][j];
			sero[j] += table[i][j];
			garo[i] += table[i][j];
			totalcnt += table[i][j];
		}
	}
	while (true)
	{
		if (nextclass)
		{
			if (totalcnt ==0)
			{
				cout << 0;
				return 0;
			}
			if (totalcnt ==N*N)
			{
				cout << 1;
				return 0;
			}
			bool changed = false;
			for (int i = 0; i < N; i++)
			{
				if (garo[i] == N)continue;
				if (garo[i] > N / 2)
				{
					garo[i] = N;
					changed = true;
					for (int j = 0; j < N; j++)
					{
						if (!table[i][j])
						{
							table[i][j] = 1;
							sero[j]++;
							totalcnt++;
						}
					}
				}
			}
			for (int j = 0; j < N; j++)
			{
				if (sero[j] == N)continue;
				if (sero[j] > N / 2)
				{
					sero[j] = N;
					changed = true;
					for (int i = 0; i < N; i++)
					{
						if (!table[i][j])
						{
							table[i][j] = 1;
							garo[i]++;
							totalcnt++;
						}
					}
				}
			}
			if (!changed)
			{
				cout << 0;
				return 0;
			}
		}
		else
		{
			if (totalcnt ==N*N)
			{
				cout << 0;
				return 0;
			}
			if (totalcnt ==0)
			{
				cout << 1;
				return 0;
			}

			bool changed = false;
			for (int i = 0; i < N; i++)
			{
				if (garo[i] == 0)continue;
				if (garo[i] <= N / 2)
				{
					garo[i] = 0;
					changed = true;
					for (int j = 0; j < N; j++)
					{
						if (table[i][j])
						{
							table[i][j] = 0;
							sero[j]--;
							totalcnt--;
						}
					}
				}
			}
			for (int j = 0; j < N; j++)
			{
				if (sero[j] == 0)continue;
				if (sero[j] <= N / 2)
				{
					sero[j] = 0;
					changed = true;
					for (int i = 0; i < N; i++)
					{
						if (table[i][j])
						{
							table[i][j] = 0;
							garo[i]--;
							totalcnt--;
						}
					}
				}
			}
			if (!changed)
			{
				cout << 0;
				return 0;
			}
		}
	}
	return 0;
}