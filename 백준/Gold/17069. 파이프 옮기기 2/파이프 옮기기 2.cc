#include <iostream>
using namespace std;
long long table[33][33][3];
int map[33][33],N;
int main(void)
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    table[1][2][0] = 1;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cin >> map[i][j];
            if (map[i][j])continue;
            table[i][j][0] += table[i][j - 1][0] + table[i][j - 1][2];
            table[i][j][1] += table[i - 1][j][1] + table[i - 1][j][2];
            if (!map[i - 1][j] and !map[i][j - 1])table[i][j][2] += table[i - 1][j - 1][0] + table[i - 1][j - 1][1]+table[i-1][j-1][2];
        }
    }
    cout << table[N][N][0] + table[N][N][1] + table[N][N][2];
    return 0;
}