#include <iostream>
#include <climits>
using namespace std;
long long N,ans=LLONG_MAX,dif=LLONG_MAX;
void dfs(bool table[10], long long num,int depth)
{
    if (abs(N - num) < dif)
    {
        dif = abs(N - num);
        ans = num;
    }
    else if (abs(N - num) == dif)
    {
        ans = min(ans, num);
    }
    if (num >= N or depth==10)return;
    for (int i = 0; i < 10; i++)
    {
        if (num == 0 and i == 0)continue;
        if (!table[i])
        {
            table[i] = true;
            dfs(table, num * 10 + i,depth+1);
            table[i] = false;
        }
    }
}
int main(void)
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    bool table[10] = { false };
    cin >> N;
    dfs(table, 0,0);
    cout << ans;
    return 0;
}