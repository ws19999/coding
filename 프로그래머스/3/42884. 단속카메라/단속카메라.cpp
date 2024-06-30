#include <string>
#include <vector>
#include <queue>
#include <climits>
using namespace std;
priority_queue<pair<int,int>> pq;
int solution(vector<vector<int>> routes) {
    int answer = 0;
    for(auto car:routes)
    {
        pq.push(make_pair(-car[1],-car[0]));
    }
    int temp=-INT_MAX;
    while(!pq.empty())
    {
        if(-pq.top().second>temp)
        {
            temp=-pq.top().first;
            answer++;
        }
        pq.pop();
    }
    return answer;
}