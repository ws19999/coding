#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <deque>
#include <tuple>
using namespace std;
bool check[301][301];
int dx[]={-1,0,1,0};
int dy[]={0,-1,0,1};
int solution(vector<vector<int>> land, int height) {
    int answer = 0;
    int N=land[0].size();
    priority_queue<tuple<int,int,int,int,int>,vector<tuple<int,int,int,int,int>>,greater<tuple<int,int,int,int,int>>> pq;
    deque<pair<int,int>> dq;
    dq.push_back(make_pair(0,0));
    check[0][0]=true;
    while(!pq.empty() or !dq.empty())
    {
        while(!dq.empty())
        {
            int x=dq.front().first;
            int y=dq.front().second;
            dq.pop_front();
            for(int k=0;k<4;k++)
            {
                int nextx=x+dx[k];
                int nexty=y+dy[k];
                if(nextx>=0 && nextx<N && nexty>=0 && nexty<N)
                {
                    if(check[nextx][nexty])continue;
                    if(abs(land[nextx][nexty]-land[x][y])<=height)
                    {
                        check[nextx][nexty]=true;
                        dq.push_back(make_pair(nextx,nexty));
                    }
                    else pq.push(make_tuple(abs(land[nextx][nexty]-land[x][y]),x,y,nextx,nexty));
                }
            }
        }
        while(!pq.empty())
        {
            if(!check[get<3>(pq.top())][get<4>(pq.top())])
            {
                answer+=get<0>(pq.top());
                check[get<3>(pq.top())][get<4>(pq.top())]=true;
                dq.push_back(make_pair(get<3>(pq.top()),get<4>(pq.top())));
                pq.pop();
                break;
            }
            pq.pop();
        }
    }
    return answer;
}