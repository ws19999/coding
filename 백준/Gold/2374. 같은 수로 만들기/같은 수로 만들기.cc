#include <iostream>
#include <deque>
// __int128를 출력하기 위한 헬퍼 함수
using namespace std;
void printInt128(__int128 value) {
	if (value == 0) {
		std::cout << "0";
		return;
	}

	char buffer[40];  // __int128의 최대 길이는 39자리이므로 충분한 크기를 할당
	char* ptr = buffer + sizeof(buffer);
	*--ptr = '\0';

	__int128 temp = value < 0 ? -value : value;

	while (temp > 0) {
		*--ptr = '0' + (temp % 10);
		temp /= 10;
	}

	if (value < 0) {
		*--ptr = '-';
	}

	cout << ptr;
}
__int128 answer = 0;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	deque<int> dq;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		if (dq.empty())dq.push_back(num);
		else
		{
			if (num == dq.back())continue;
			if (num < dq.back())dq.push_back(num);
			else
			{
				answer += num - dq.back();
				while (!dq.empty())
				{
					if (dq.back() <= num)dq.pop_back();
					else break;
				}
				dq.push_back(num);
			}
		}
	}
	answer += dq.front() - dq.back();
	printInt128(answer);
	return 0;
}