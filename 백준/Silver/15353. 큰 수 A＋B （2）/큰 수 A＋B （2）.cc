#include <iostream>
#include <deque>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	deque<int> A, B, ans;
	string a, b;
	cin >> a >> b;
	for (int i = 0; i < a.length(); i++)A.push_back(a[i]-'0');
	for (int i = 0; i < b.length(); i++)B.push_back(b[i]-'0');
	int up = 0,num;
	while (true)
	{
		if (A.empty() && B.empty())break;
		if (A.empty())
		{
			while (!B.empty())
			{
				num = B.back() + up;
				up = 0;
				if (num >= 10)
				{
					up = 1;
					num -= 10;
				}
				ans.push_front(num);
				B.pop_back();
			}
			break;
		}
		else if (B.empty())
		{
			while (!A.empty())
			{
				num = A.back() + up;
				up = 0;
				if (num >= 10)
				{
					up = 1;
					num -= 10;
				}
				ans.push_front(num);
				A.pop_back();
			}
			break;
		}
		else
		{
			num = A.back() + B.back() + up;
			A.pop_back();
			B.pop_back();
			up = 0;
			if (num >= 10)
			{
				up = 1;
				num -= 10;
			}
			ans.push_front(num);
		}
	}
	if (up)ans.push_front(1);
	for (auto i : ans)cout << i;
	return 0;
}