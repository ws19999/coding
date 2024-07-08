#include <iostream>
#include <unordered_map>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++)
	{
		unordered_map<string, int> univ;
		int N;
		cin >> N;
		for (int i = 0; i < N; i++)
		{
			string school;
			int alcohol;
			cin >> school >> alcohol;
			univ[school] += alcohol;
		}
		string winner;
		int amount = 0;
		for (auto school : univ)
		{
			if (school.second > amount)
			{
				winner = school.first;
				amount = school.second;
			}
		}
		cout << winner << "\n";
	}
	return 0;
}