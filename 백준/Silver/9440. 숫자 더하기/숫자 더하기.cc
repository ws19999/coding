#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int nums[14];
	while (true)
	{
		int num;
		cin >> num;
		if (num == 0)break;
		for (int i = 0; i < num; i++)cin >> nums[i];
		sort(nums, nums + num);
		if (nums[1] == 0)
		{
			if (num % 2 == 0)
			{
				for (int i = 2; i < num; i++)
				{
					if (nums[i])
					{
						nums[0] = nums[i];
						nums[1] = nums[i + 1];
						nums[i] = 0;
						nums[i + 1] = 0;
						break;
					}
				}
			}
			else
			{
				for (int i = 2; i < num; i++)
				{
					if (nums[i])
					{
						nums[0] = nums[i];
						nums[1] = nums[i + 1];
						nums[i] = 0;
						nums[i + 1] = 0;
						break;
					}
				}
			}
		}
		else if (nums[0] == 0)
		{
			if (num % 2 == 0)
			{
				for (int i = 2; i < num; i++)
				{
					if (nums[i])
					{
						nums[0] = nums[i];
						nums[i] = 0;
						break;
					}
				}
			}
			else
			{
				for (int i = 1; i < num; i++)
				{
					if (nums[i])
					{
						nums[0] = nums[i];
						nums[i] = 0;
						break;
					}
				}
			}
		}
		long long answer = 0;
		int pos = 0;
		if (num % 2 == 1)
		{
			answer = nums[0];
			pos++;
		}
		while (pos < num)
		{
			answer *= 10;
			answer += nums[pos] + nums[pos + 1];
			pos += 2;
		}
		cout << answer << "\n";
	}
	return 0;
}