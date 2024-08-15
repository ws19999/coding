#include <iostream>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N;
	cin >> N;
	if (N > 184010 or N<38210)cout << "No Answer";
	else
	{
		bool check[10] = { false };
		int temp = 0;
		for (int h = 1; h <= 9; h++)
		{
			if (h * 10000 >= N)break;
			check[h] = true;
			temp += h * 10000;
			for (int w = 1; w <= 9; w++)
			{
				if (check[w])continue;
				if (temp + w*10000 > N)break;
				if (temp + (w + 2)*10000 <= N)continue;
				check[w] = true;
				temp += w * 10000;
				for (int e = 0; e <= 9; e++)
				{
					if (check[e])continue;
					if (temp + e * 1000 > N)break;
					
					check[e] = true;
					temp += e * 1000;
					for (int o = 0; o <= 9; o++)
					{
						if (check[o])continue;
						if (temp + o * 1001 > N)break;
						if (temp + o * 1001 + 2000 <= N)continue;
						
						check[o] = true;
						temp += o * 1001;
						for (int l = 0; l <= 9; l++)
						{
							if (check[l])continue;
							if (temp + l * 120 > N)break;
							temp += l * 120;
							check[l] = true;
							for (int r = 0; r <= 9; r++)
							{
								if (check[r])continue;
								if (temp + r * 100 > N)break;
								if (temp + r * 100 + 200 <= N)continue;
								check[r] = true;
								temp += r * 100;
								for (int d = 0; d <= 9; d++)
								{
									if (check[d])continue;
									if (temp + d != N)continue;
									else
									{
										cout << "  " << h << e << l << l << o << "\n";
										cout << "+ " << w << o << r << l << d << "\n";
										cout << "-------\n";
										if(N>=100000)cout << " " << N;
										else cout << "  " << N;
										return 0;

									}
								}
								temp -= r * 100;
								check[r] = false;
							}
							temp -= l * 120;
							check[l] = false;
						}
						check[o] = false;
						temp -= o * 1001;
					}
					check[e] = false;
					temp -= e * 1000;
				}
				check[w] = false;
				temp -= w * 10000;
			}
			check[h] = false;
			temp -= h * 10000;
		}
		cout << "No Answer";
	}
	return 0;
}