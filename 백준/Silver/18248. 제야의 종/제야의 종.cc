#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N, M;
    cin >> N >> M;

    vector <vector<int>> arr(N, vector<int>(M + 1, 0));
    for (int i = 0; i < N; i++) {
        int sum = 0;
        for (int j = 0; j < M; j++) {
            cin >> arr[i][j];
            sum += arr[i][j];
        }
        arr[i][M] = sum;
    }

    bool ans = true;

    sort(arr.begin(), arr.end(), [M](const vector<int>& v1, const vector<int>& v2) {
        return v1[M] > v2[M];
        });

    for (int i = 0; i < M; i++) {
        int check = arr[0][i];
        for (int j = 0; j < N; j++) {
            if (check < arr[j][i]) {
                ans = false;
                break;
            }
            check = arr[j][i];
        }
    }
    if (ans) cout << "YES";
    else cout << "NO";
    return 0;
}