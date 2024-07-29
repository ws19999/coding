#include <iostream>
using namespace std;
int Mod = 1000000007;
int len=0, answer = 0;
char first;
string str;
/*string rsp(char a, char b)
{
	if (a == b)return "draw";
	if ((a == 'R' and b == 'S') or (a == 'S' and b == 'P') or (a == 'P' or b == 'R'))return "win";
	else return "lose";
}*/
long long table[1000001][9]; //RS RP RR SP SR SS PR PS PP
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> first >> str;
	len = str.length();
	for (int i = 1; i <= len; i++)
	{
		if (str[i - 1] == 'R')
		{
			if (first == 'R')table[i][2]++;
			else if (first == 'S')table[i][4]++;
			else if (first == 'P')table[i][6]++;
		}
		else if (str[i - 1] == 'S')
		{
			if (first == 'R')table[i][0]++;
			else if (first == 'S')table[i][5]++;
			else if (first == 'P')table[i][7]++;
		}
		else if (str[i - 1] == 'P')
		{
			if (first == 'R')table[i][1]++;
			else if (first == 'S')table[i][3]++;
			else if (first == 'P')table[i][8]++;
		}
		for (int j = 0; j < 9; j++)
		{
			table[i][j] += table[i - 1][j];
			if (str[i - 1] == 'R')
			{
				if (j == 6)continue;
				if (j == 0 or j == 5 or j == 7)table[i][4] += table[i - 1][j];
				else if (j == 2 or j == 4 or j == 6)table[i][2] += table[i - 1][j];
				else table[i][6] += table[i - 1][j];
			}
			else if (str[i - 1] == 'S')
			{
				if (j == 0)continue;
				if (j == 0 or j == 5 or j == 7)table[i][5] += table[i - 1][j];
				else if (j == 2 or j == 4 or j == 6)table[i][0] += table[i - 1][j];
				else table[i][7] += table[i - 1][j];
			}
			else if (str[i - 1] == 'P')
			{
				if (j == 3)continue;
				if (j == 0 or j == 5 or j == 7)table[i][3] += table[i - 1][j];
				else if (j == 2 or j == 4 or j == 6)table[i][1] += table[i - 1][j];
				else table[i][8] += table[i - 1][j];
			}
			for (int j = 0; j < 9; j++)table[i][j] %= Mod;
		}
		for (int j = 0; j < 9; j++)table[i][j] %= Mod;
	}
	for (int i = 0; i < 9; i++)
	{
		answer += table[len][i];
		answer %= Mod;
	}
	cout << answer;
	return 0;
}