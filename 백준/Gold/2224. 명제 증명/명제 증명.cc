#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
using namespace std;
vector<char> answer[100];
vector<char> thesis[100];
bool check[100][100];
int ans = 0;
char fronts;
int table[100][100];
void dfs(char c)
{
	if (c != fronts)
	{
		answer[fronts - 'A'].push_back(c);
		ans++;
	}
	for (auto i : thesis[c - 'A'])
	{
		if (!table[fronts-'A'][i])
		{
			table[fronts - 'A'][i] = 1;
			dfs(i);
		}
	}
}
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		char P, Q;
		string s;
		cin >> P >> s >> Q;
		if (!check[P - 'A'][Q - 'A'] and P!=Q)
		{
			check[P - 'A'][Q - 'A'] = true;
			thesis[P - 'A'].push_back(Q);
		}
	}
	for (char a = 'A'; a <= 'z'; a++)
	{
		fronts = a;
		table[a - 'A'][a - 'A'] = 1;
		dfs(a);
	}
	cout << ans << "\n";
	for (char a = 'A'; a <= 'z'; a++)
	{
		sort(answer[a - 'A'].begin(), answer[a - 'A'].end());
		for (auto ans : answer[a - 'A'])cout << a << " => " << ans << "\n";
	}
	return 0;
}