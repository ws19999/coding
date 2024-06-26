#include <string>
#include <vector>
#include <deque>
using namespace std;
bool check[20001];
vector <int> vec[20001];
int solution(int n, vector<vector<int>> edge) {
    for(auto i:edge)
    {
        vec[i[0]].push_back(i[1]);
        vec[i[1]].push_back(i[0]);
    }
    int answer = 0;
    int maximum = 0;
    deque<pair<int,int>> dq;
    dq.push_back(make_pair(1,0));
    check[1]=true;
    while(!dq.empty())
    {
        int node=dq.front().first;
        int t=dq.front().second;
        dq.pop_front();
        if(t>maximum)
        {
            maximum=t;
            answer=1;
        }
        else answer++;
        for(auto i:vec[node])
        {
            if(!check[i])
            {
                check[i]=true;
                dq.push_back(make_pair(i,t+1));
            }
        }
    }
    return answer;
}