#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int ans[1000000];
int main(void)
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N;
    cin >> N;
    vector<pair<int, int>> vec;
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        vec.push_back(make_pair(num, i));
    }
    sort(vec.begin(), vec.end());
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        if (i > 0) {
            if (vec[i - 1].first == vec[i].first) ans[vec[i].second] = ans[vec[i - 1].second];
            else ans[vec[i].second] = cnt++;
        }
        else ans[vec[i].second] = cnt++;
    }
    for (int i = 0; i < N; i++)cout << ans[i] << " ";
    return 0;
}