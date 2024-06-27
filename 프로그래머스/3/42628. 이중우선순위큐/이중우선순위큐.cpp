#include <string>
#include <vector>
#include <queue>
using namespace std;

vector<int> solution(vector<string> operations) {
    vector<int> answer;
    priority_queue<int> pq;
    priority_queue<int, vector<int>, greater<int>> pq1;
    for(auto op:operations)
    {
        if(pq.empty() or pq1.empty() or pq.top()<pq1.top())
        {
            while(!pq1.empty())pq1.pop();
            while(!pq.empty())pq.pop();
        }
        if(op[0]=='I')
        {
            pq.push(stoi(op.substr(2)));
            pq1.push(stoi(op.substr(2)));
        }
        else if(op[2]=='-')
        {
            if(pq1.empty() or pq.empty())continue;
            pq1.pop();
        }
        else
        {
            if(pq.empty() or pq1.empty())continue;
            pq.pop();
        }
    }
    if(pq1.empty() or pq.empty())
    {
        answer.push_back(0);
        answer.push_back(0);
    }
    else
    {
        answer.push_back(pq.top());
        answer.push_back(pq1.top());
    }
    return answer;
}