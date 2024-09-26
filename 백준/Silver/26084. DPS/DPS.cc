#include <iostream>
#include <unordered_map>
using namespace std;
int table['Z' - 'A'+1];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	unordered_map<char, int> keys;
	string str;
	cin >> str;
	for (int i = 0; i < 3; i++)keys[str[i]-'A']++;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> str;
		table[str[0] - 'A']++;
	}
	long long answer = 1;
	for (auto i : keys)
	{
		for (long long j = 1; j <= i.second; j++) 
		{
			answer *= (table[i.first] - j + 1); 
			answer /= j; 
		}
	}
	cout << answer;
	return 0;
}