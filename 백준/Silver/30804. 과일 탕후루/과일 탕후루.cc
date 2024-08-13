#include <iostream>
using namespace std;
int table[200000];
int tang[10];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N,answer=1,f=0,temp=0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> table[i];
		if (!tang[table[i]])temp++;
		tang[table[i]]++;
		while (temp > 2)
		{
			tang[table[f]]--;
			if (!tang[table[f]])temp--;
			f++;
		}
		answer = max(answer, i - f + 1);
	}
	cout << answer;
	return 0;
}