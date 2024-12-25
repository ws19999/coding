#include <iostream>
#include <queue>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	priority_queue<int> sleigh;
	int n;
	cin >> n;
	while (n--)
	{
		int a;
		cin >> a;
		if (a == 0)
		{
			if (sleigh.empty())cout << "-1\n";
			else
			{
				cout << sleigh.top()<<"\n";
				sleigh.pop();
			}
		}
		else
		{
			while (a--)
			{
				int price;
				cin >> price;
				sleigh.push(price);
			}
		}
	}
	return 0;
}