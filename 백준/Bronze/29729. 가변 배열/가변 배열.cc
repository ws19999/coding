#include <iostream>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int S, N, M,U=0;
    cin >> S >> N >> M;
    for (int i = 0; i < N + M; i++) {
        int d;
        cin >> d;
        if (d == 1) {
            if (U == S) {
                S *= 2;
            }
            U++;
        }
        else {
            U--;
        }
    }
    cout << S;
    return 0;
}