#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; tc++) {
        unsigned long long N;
        cin >> N;
        int start = 1, end = 141421356;
        int answer = 0;
        while (start <= end) {
            int mid = (start + end) / 2;
            unsigned long long num = (unsigned long long)mid * (mid + 1) / 2;
            if (num <= N) {
                answer = mid;
                start = mid + 1;
            }
            else end = mid - 1;
        }
        cout << answer << "\n";
    }
    return 0;
}
