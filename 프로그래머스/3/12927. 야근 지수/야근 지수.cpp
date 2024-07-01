#include <string>
#include <vector>
#include <queue>
using namespace std;
priority_queue<int> pq;
long long solution(int n, vector<int> works) {
    for(auto i:works)pq.push(i);
    for(int i=0;i<n;i++)
    {
        int w=pq.top();
        if(w==0)break;
        pq.pop();
        pq.push(w-1);
    }
    long long answer = 0;
    while(!pq.empty())
    {
        long long temp=pq.top();
        temp*=temp;
        answer+=temp;
        pq.pop();
    }
    return answer;
}