#include <iostream>
using namespace std;
int main(void){
    int N;
cin >> N;
for (int i = 1; i <= N; i++) {
    int num = i;
    int cnt = 0;
    while (num) {
        int temp = num % 10;
        if (temp==3 || temp==6 || temp==9)cnt++;
        num /= 10;
    }
    if (cnt) {
        for (int t = 1; t <= cnt; t++)cout << "-";
    }
    else cout << i;
    cout << " ";
}
return 0;
}