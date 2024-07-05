#include <iostream>
#include <vector>
using namespace std;
vector<int> S;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N,K;
	cin>>N>>K;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		S.push_back(num);
	}
	int answer = 0;
	int temp = 0;
	int s = 0, e = 0;
	int k = 0;
	if (S[0] % 2 == 1)k = 1;
	else temp = 1;
	while (e < N)
	{
		while (k <= K)
		{
			e++;
			if (e == N)
			{
				answer = max(answer, temp);
				break;
			}
			if (S[e] % 2 == 1)k++;
			else temp++;
		}
		answer = max(answer, temp);
		while (k > K)
		{
			if (S[s] % 2 == 1)k--;
			else temp--;
			s++;
		}
	}
	cout << answer;
	return 0;
}