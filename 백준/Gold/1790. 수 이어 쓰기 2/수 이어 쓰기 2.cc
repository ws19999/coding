#include <iostream>
#include <string>
using namespace std;
int main() {
    long long N, k;
    cin >> N >> k;
    long long length = 0;
    long long digit_length = 1;
    long long start = 1;
    while (start <= N) {
        long long end = start * 10 - 1;
        if (end > N) end = N;
        length += (end - start + 1) * digit_length;
        digit_length++;
        start *= 10;
    }
    if (k > length) {
        cout << "-1\n";
        return 0;
    }
    digit_length = 1;
    start = 1;
    while (start <= N) {
        long long end = start * 10 - 1;
        if (end > N) end = N;
        long long current_length = (end - start + 1) * digit_length;
        if (k <= current_length) {
            break;
        }
        k -= current_length;
        digit_length++;
        start *= 10;
    }
    long long number = start + (k - 1) / digit_length;
    string number_str = to_string(number);
    int digit_index = (k - 1) % digit_length;
    cout << number_str[digit_index] << "\n";
    return 0;
}