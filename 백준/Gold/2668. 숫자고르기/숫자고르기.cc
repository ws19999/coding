#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
int N,table[101],ans=0;
bool finds;
deque<int> dq;
bool check[101];
void dfs(int start,int num)
{
	if (table[num] == start)finds = true;
	else if (table[num]<start || check[table[num]])finds = false;
	else
	{
		check[table[num]] = true;
		dfs(start, table[num]);
		check[table[num]] = false;
	}
	if (finds)dq.push_back(num);
}
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> N;
	for (int i = 1; i <= N; i++)cin >> table[i];
	for (int i = 1; i <= N; i++)
	{
		finds = false;
		check[i] = true;
		dfs(i, i);
		check[i] = false;
	}
	sort(dq.begin(),dq.end());
	int size = dq.size();
	cout << size << "\n";
	for (int i = 0; i < size; i++)cout << dq[i] << "\n";
	return 0;
}