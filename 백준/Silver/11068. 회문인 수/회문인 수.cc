#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++)
	{
		bool possible = false;
		int num;
		cin >> num;
		for (int i = 2; i <= 64; i++)
		{
			int temp = num;
			vector<int> vec;
			while (temp)
			{
				vec.push_back(temp % i);
				temp /= i;
			}
			int b = vec.size()-1;
			int f = 0;
			bool ps = true;
			while (f < b)
			{
				if (vec[f] == vec[b])
				{
					f++;
					b--;
				}
				else
				{
					ps = false;
					break;
				}
			}
			if (ps)
			{
				possible = true;
				break;
			}
		}
		if (possible)cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}