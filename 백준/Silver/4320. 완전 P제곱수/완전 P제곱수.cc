#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (true)
	{
		long long num;
		cin >> num;
		if (num == 0)break;
		for (int j = 31; j >= 1; j--)
		{
			if (num < 0 && j % 2 == 0) {
				continue;
			}

			long double root = pow(abs(num), 1.0L / j);
			long long roundedRoot = llround(root); 

			if (pow(roundedRoot, j) == abs(num))
			{
				if (num < 0) roundedRoot = -roundedRoot;  
				cout << j << "\n";
				break;
			}
		}
	}
	return 0;
}