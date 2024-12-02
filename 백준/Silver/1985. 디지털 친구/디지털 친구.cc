#include <iostream>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	for (int tc = 1; tc <= 3; tc++)
	{
		string x, y;
		cin >> x >> y;
		bool friends = true;
		bool almost_friends = false;
		int nums1[10] = { 0 };
		int nums2[10] = { 0 };
		for (auto i : x)nums1[i - '0']++;
		for (auto i : y)nums2[i - '0']++;
		for (int i = 0; i < 10; i++)
		{
			if ((nums1[i] and nums2[i]) or (!nums1[i] and !nums2[i]))continue;
			else
			{
				friends = false;
				break;
			}
		}
		if (friends)cout << "friends\n";
		else
		{
			for (int i = 0; i < x.length()-1; i++)
			{
				if (x[i] != '0' and (i!=0 or x[i]!='1') and x[i+1]!='9')
				{
					nums1[x[i] - '0']--;
					nums1[x[i + 1] - '0']--;
					nums1[x[i] - 1 - '0']++;
					nums1[x[i + 1]+1 - '0']++;
					almost_friends = true;
					for (int k = 0; k < 10; k++)
					{
						if ((nums1[k] and nums2[k]) or (!nums1[k] and !nums2[k]))continue;
						else
						{
							almost_friends = false;
							break;
						}
					}
					nums1[x[i] - '0']++;
					nums1[x[i + 1] - '0']++;
					nums1[x[i] - 1 - '0']--;
					nums1[x[i + 1] + 1 - '0']--;
					if (almost_friends)break;
				}
				if (x[i] != '9' and x[i + 1] != '0')
				{
					nums1[x[i] - '0']--;
					nums1[x[i + 1] - '0']--;
					nums1[x[i] + 1 - '0']++;
					nums1[x[i + 1] - 1 - '0']++;
					almost_friends = true;
					for (int k = 0; k < 10; k++)
					{
						if ((nums1[k] and nums2[k]) or (!nums1[k] and !nums2[k]))continue;
						else
						{
							almost_friends = false;
							break;
						}
					}
					nums1[x[i] - '0']++;
					nums1[x[i + 1] - '0']++;
					nums1[x[i] + 1 - '0']--;
					nums1[x[i + 1] - 1 - '0']--;
					if (almost_friends)break;
				}
			}
			if (almost_friends)
			{
				cout << "almost friends\n";
				continue;
			}
			for (int i = 0; i < y.length()-1; i++)
			{
				if (y[i] != '0' and (i != 0 or y[i] != '1') and y[i + 1] != '9')
				{
					nums2[y[i] - '0']--;
					nums2[y[i + 1] - '0']--;
					nums2[y[i] - 1 - '0']++;
					nums2[y[i + 1] + 1 - '0']++;
					almost_friends = true;
					for (int k = 0; k < 10; k++)
					{
						if ((nums1[k] and nums2[k]) or (!nums1[k] and !nums2[k]))continue;
						else
						{
							almost_friends = false;
							break;
						}
					}
					nums2[y[i] - '0']++;
					nums2[y[i + 1] - '0']++;
					nums2[y[i] - 1 - '0']--;
					nums2[y[i + 1] + 1 - '0']--;
					if (almost_friends)break;
				}
				if (y[i] != '9' and y[i + 1] != '0')
				{
					nums2[y[i] - '0']--;
					nums2[y[i + 1] - '0']--;
					nums2[y[i] + 1 - '0']++;
					nums2[y[i + 1] - 1 - '0']++;
					almost_friends = true;
					for (int k = 0; k < 10; k++)
					{
						if ((nums1[k] and nums2[k]) or (!nums1[k] and !nums2[k]))continue;
						else
						{
							almost_friends = false;
							break;
						}
					}
					nums2[y[i] - '0']++;
					nums2[y[i + 1] - '0']++;
					nums2[y[i] + 1 - '0']--;
					nums2[y[i + 1] - 1 - '0']--;
					if (almost_friends)break;
				}
			}
			if (almost_friends)cout << "almost friends\n";
			else cout << "nothing\n";
		}
	}
	return 0;
}