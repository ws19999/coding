#include <iostream>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	for (int tc = 1; tc <= 3; tc++)
	{
		__int128 answer = 0;
		int N;
		cin >> N;
		for (int i = 0; i < N; i++)
		{
			long long temp;
			cin >> temp;
			answer += temp;
		}
		if (answer > 0)cout << "+\n";
		else if (answer == 0)cout << "0\n";
		else cout << "-\n";
	}
}