#include <iostream>
#include <deque>
using namespace std;
int n,k,zeros=0,peoplecnt=0;
deque<int> belt;
deque<int> robot;
void first() {
	belt.push_front(belt.back());
	belt.pop_back();
	for (int i = 0; i < peoplecnt; i++) {
		robot[i]++;
	}
	if (!robot.empty()) {
		if (robot.back() == n-1) {
			robot.pop_back();
			peoplecnt--;
		}
	}
}
void second() {
	for (int i = peoplecnt - 1; i >= 0; i--) {
		if (i < peoplecnt - 1) {
			if (robot[i + 1] != robot[i] + 1 and belt[robot[i] + 1] > 0) {
				robot[i]++;
				belt[robot[i]]--;
				if (belt[robot[i]] == 0)zeros++;
				continue;
			}
			else continue;
		}
		if (belt[robot[i] + 1] > 0) {
			robot[i]++;
			belt[robot[i]]--;
			if (belt[robot[i]] == 0)zeros++;
		}
	}
	if (!robot.empty()) {
		if (robot.back() == n-1) {
			robot.pop_back();
			peoplecnt--;
		}
	}
}
void third() {
	if (belt.front() != 0) {
		if (robot.empty()) {
			robot.push_front(0);
			peoplecnt++;
			belt.front()--;
			if (belt.front() == 0)zeros++;
		}
		else if (robot.front() != 0) {
			robot.push_front(0);
			peoplecnt++;
			belt.front()--;
			if (belt.front() == 0)zeros++;
		}
	}
}
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n>>k;
	for (int i = 0; i < 2 * n; i++) {
		int stability;
		cin >> stability;
		belt.push_back(stability);
	}
	int tc = 0;
	while (true) {
		tc++;
		first();
		second();
		third();
		if (zeros >= k)break;
	}
	cout << tc;
	return 0;
}