#include <string>
#include <vector>
#include <queue>
#include <deque>
using namespace std;

int solution(vector<int> priorities, int location) {
    deque<pair<int,int>> dq;
    int answer = 1;
    priority_queue<int> pq;
    for(int i=0;i<priorities.size();i++)
    {
        dq.push_back(make_pair(priorities[i],i));
        pq.push(priorities[i]);
    }
    
    while(true)
    {
        int a=dq.front().first;
        int b=dq.front().second;
        dq.pop_front();
        if(pq.top()!=a)dq.push_back(make_pair(a,b));
        else
        {
            pq.pop();
            if(b==location)break;
            answer++;
        }
    }
    return answer;
}