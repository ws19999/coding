#include <iostream>
#include <algorithm>
using namespace std;

// 128비트 정수형 사용
__int128 answer;
long long table[100000];

// __int128의 출력 도우미 함수
void printInt128(__int128 value) {
    if (value == 0) {
        cout << 0;
        return;
    }
    if (value < 0) {
        cout << '-';
        value = -value;
    }
    string result;
    while (value > 0) {
        result += (value % 10) + '0';
        value /= 10;
    }
    reverse(result.begin(), result.end());
    cout << result;
}

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long N, M, K, X, Y;
    cin >> N >> M >> K >> X >> Y;

    // 초기 값 설정 (일반 열차와 급행 열차의 기본 운행 시간)
    answer = static_cast<__int128>(X + Y) * K;

    for (int i = 0; i < N; i++) {
        long long A, B;
        cin >> A >> B;

        // 대피선 설치로 인한 운행 시간 변화 계산
        long long impact = A * X - B * Y;
        table[i] = impact;
    }

    // 대피선 설치 효과가 작은 순으로 정렬
    sort(table, table + N);

    // 반드시 M개의 대피선을 설치하여 최소화
    for (int i = 0; i < M; i++) {
        answer += static_cast<__int128>(table[i]);
    }

    // __int128 출력
    printInt128(answer);
    cout << '\n';
    return 0;
}
