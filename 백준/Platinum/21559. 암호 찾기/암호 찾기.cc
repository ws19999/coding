#include <iostream>
#include <climits>
#include <unordered_map>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	unordered_map<long long, int> maps;
	unordered_map<long long, int> check;
	int N, K,ans=0;
	long long hashnum = 0,hash=17,h=1,s=LLONG_MAX;
	cin >> N >> K;
	string A, B;
	cin >> A >> B;
	for (int i = 0; i < K-1; i++)
	{
		h *= hash;
		hashnum *= hash;
		hashnum += A[i] - '0';
		hashnum %= s;
		h %= s;
	}
	hashnum *= hash;
	hashnum += A[K - 1] - '0';
	hashnum %= s;
	maps[hashnum] = 1;
	for (int i = K; i < N; i++)
	{
		hashnum -= (A[i - K] - '0') * h;
		hashnum *= hash;
		hashnum += A[i] - '0';
		hashnum %= s;
		maps[hashnum] = 1;
	}
	hashnum = 0;
	for (int i = 0; i < K; i++)
	{
		hashnum *= hash;
		hashnum += B[i] - '0';
		hashnum %= s;
	}
	if (maps[hashnum])
	{
		ans++;
		check[hashnum] = 1;
	}
	for (int i = K; i < N; i++)
	{
		hashnum -= (B[i - K] - '0') * h;
		hashnum *= hash;
		hashnum += B[i] - '0';
		hashnum %= s;
		if (maps[hashnum] && !check[hashnum])
		{
			ans++;
			check[hashnum] = 1;
		}
	}
	cout << ans;
	return 0;
}