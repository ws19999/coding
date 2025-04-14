#include <iostream>
using namespace std;
long long C[200000];
long long 경제학[200000];
int main(void)
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; tc++) {
        int N, M;
        long long sum1 = 0;
        long long sum2 = 0;
        cin >> N >> M;
        for (int i = 0; i < N; i++) {
            cin >> C[i];
            sum1 += C[i];
        }
        for (int j = 0; j < M; j++) {
            cin >> 경제학[j];
            sum2 += 경제학[j];
        }
        double avg1 = sum1 / double(N);
        double avg2 = sum2 / double(M);
        int ans = 0;
        for (int i = 0; i < N; i++) {
            if ((sum1 - C[i]) / double(N - 1) > avg1 && (sum2 + C[i]) / double(M + 1) > avg2)ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}