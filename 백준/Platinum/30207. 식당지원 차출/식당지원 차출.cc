#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int maxx=0,day=0,pri[10001],N, Q,table[10001];
vector <int> seq[10001];
long long bsearch(int x,int d) {
    long long l = 0, r = table[x] - 1;
    long long ans = table[x];
    while (l <= r) {
        long long mid = (l + r) / 2;
        if (seq[x][mid] < d) {
            l = mid + 1;
        }
        else if (seq[x][mid] > d) {
            ans = mid;
            r = mid - 1;
        }
        else return mid+1;
    }
    return ans;
}
void ask(int Q) {
    for (int q = 1; q <= Q; q++) {
        long long d, x, ans = 0;
        cin >> d >> x;
        if (d < day) {
            ans=bsearch(x,d);
        }
        else {
            long long temp = (d - day) * 3;
            ans = table[x] + temp / N;
            if (temp % N >= x)ans++;
        }
        cout << ans << "\n";
    }
}
int main(void)
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> N;
    priority_queue<pair<int,int>> pq;
    for (int i = 1; i <= N; i++) {
        cin >> pri[i];
        maxx = max(maxx, pri[i]);
        pq.push(make_pair(-pri[i], -i));
    }
    int nums[3][2];
    while (true) {
        if (-pq.top().first == maxx) break;
        
        if (N == 3)break;
        day++;
        for (int j = 0; j < 3; j++) {
            nums[j][0] = -pq.top().first;
            nums[j][1] = -pq.top().second;
            pq.pop();
            nums[j][0]++;
            maxx = max(maxx, nums[j][0]);
            seq[nums[j][1]].push_back(day);
        }
        for (int j = 0; j < 3; j++) {
            pq.push(make_pair(-nums[j][0], -nums[j][1]));
        }
    }
    for (int i = 1; i <= N; i++)table[i] = seq[i].size();
    cin >> Q;
    ask(Q);
    return 0;
}