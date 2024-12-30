#include <iostream>
#include <unordered_set>
#include <set>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N, M,cnt=0;
    cin >> N >> M;
    unordered_set<string> 듣못;
    set<string> answer;
    for (int i = 0; i < N; i++) {
        string name;
        cin >> name;
        듣못.insert(name);
    }
    for (int i = 0; i < M; i++) {
        string name;
        cin >> name;
        if (듣못.find(name) != 듣못.end()) {
            answer.insert(name);
            cnt++;
        }
    }
    cout << cnt<<"\n";
    for (auto name : answer)cout << name << "\n";
    return 0;
}