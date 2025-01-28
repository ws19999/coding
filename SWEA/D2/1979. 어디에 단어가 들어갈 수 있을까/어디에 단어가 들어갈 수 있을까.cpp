#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <cmath>
using namespace std;
int puzzle[17][17];
int main(void)
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; tc++) {
        int N, K, ans = 0;
        cin >> N >> K;
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                cin >> puzzle[i][j];
            }
        }
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N - K + 1; j++) {
                if (puzzle[i][j - 1] == 0 && puzzle[i][j + K] == 0) {
                    bool poss = true;
                    for (int b = j; b <= j + K - 1; b++) {
                        if (puzzle[i][b] == 0) {
                            poss = false;
                            break;
                        }
                    }
                    if (poss)ans++;
                    
                }
                if (puzzle[j - 1][i] == 0 && puzzle[j + K][i] == 0) {
                    bool poss = true;
                    for (int b = j; b <= j + K - 1; b++) {
                        if (puzzle[b][i] == 0) {
                            poss = false;
                            break;
                        }
                    }
                    if (poss)ans++;
                }
            }
        }
        cout << "#" << tc << " " << ans << "\n";
    }
    return 0;
}