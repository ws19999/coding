#include <iostream>
using namespace std;
long long puzzle[500][500];
int main(void)
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N,x,y;
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> puzzle[i][j];
            if (puzzle[i][j] == 0) {
                x = i;
                y = j;
            }
        }
    }
    long long 세로 = 0,가로=0,대각선=0,temp=0;
    if (y == 0) {
        for (int i = 0; i < N; i++) {
            세로 += puzzle[i][1];
        }
    }
    else {
        for (int i = 0; i < N; i++) {
            세로 += puzzle[i][0];
        }
    }
    for (int i = 0; i < N; i++)temp += puzzle[i][y];
    puzzle[x][y] = 세로 - temp;
    bool pos = true;
    for (int j = 0; j < N; j++) {
        temp = 0;
        for (int i = 0; i < N; i++)temp += puzzle[i][j];
        if (temp != 세로) {
            pos = false;
            break;
        }
    }
    if (pos) {
        가로 = 0;
        for (int j = 0; j < N; j++)가로 += puzzle[0][j];
        if (가로 != 세로)pos = false;

        for (int i = 1; i < N; i++) {
            temp = 0;
            for (int j = 0; j < N; j++)temp += puzzle[i][j];
            if (temp != 가로) {
                pos = false;
                break;
            }
        }
    }
    if (pos) {
        long long num1 = 0, num2 = 0;
        for (int i = 0; i < N; i++) {
            num1 += puzzle[i][i];
            num2 += puzzle[i][N - i-1];
        }
        if (num1 != num2 || 세로!=num1)pos = false;
    }
    if (!pos || puzzle[x][y]<=0)cout << -1;
    else cout << puzzle[x][y];
    return 0;
}
