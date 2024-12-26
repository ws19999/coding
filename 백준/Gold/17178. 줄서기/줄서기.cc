#include <iostream>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
#include <string>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N;
	queue<string> q[101];
	deque<pair<char,int>> dq;
	stack<string> waiting;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		for (int j = 0; j < 5; j++) {
			string num;
			cin >> num;
			dq.push_back(make_pair(num[0], stoi(num.substr(2))));
			q[i].push(num);
		}
	}
	sort(dq.begin(), dq.end());
	int pos = 1;
	string answer = "GOOD";
	while (pos <= N) {
		if (waiting.empty()) {
			waiting.push(q[pos].front());
			q[pos].pop();
		}
		else if (waiting.top()[0] == dq.front().first and stoi(waiting.top().substr(2)) == dq.front().second) {
			waiting.pop();
			dq.pop_front();
		}
		else {
			waiting.push(q[pos].front());
			q[pos].pop();
		}
		if (q[pos].empty())pos++;
	}
	while (!waiting.empty()) {
		if (waiting.top()[0] == dq.front().first and stoi(waiting.top().substr(2)) == dq.front().second) {
			waiting.pop();
			dq.pop_front();
		}
		else {
			answer = "BAD";
			break;
		}
	}
	cout << answer;
	return 0;
}