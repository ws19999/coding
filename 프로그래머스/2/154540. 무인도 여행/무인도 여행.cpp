#include <string>
#include <vector>
#include <deque>
#include <algorithm>
using namespace std;
bool check[100][100];
int dx[]={-1,0,1,0};
int dy[]={0,-1,0,1};
vector<int> solution(vector<string> maps) {
    vector<int> answer;
    int n=maps.size();
    int m=maps[0].length();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(maps[i][j]!='X' && !check[i][j])
            {
                int temp=maps[i][j]-'0';
                check[i][j]=true;
                deque<pair<int,int>> dq;
                dq.push_back(make_pair(i,j));
                while(!dq.empty())
                {
                    int x=dq.front().first;
                    int y=dq.front().second;
                    dq.pop_front();
                    for(int k=0;k<4;k++)
                    {
                        int nextx=x+dx[k];
                        int nexty=y+dy[k];
                        if(nextx>=0 && nextx<n && nexty>=0 && nexty<m)
                        {
                            if(maps[nextx][nexty]!='X' && !check[nextx][nexty])
                            {
                                check[nextx][nexty]=true;
                                dq.push_back(make_pair(nextx,nexty));
                                temp+=maps[nextx][nexty]-'0';
                            }
                        }
                    }
                }
                answer.push_back(temp);
            }
        }
    }
    sort(answer.begin(),answer.end());
    if(answer.empty())answer.push_back(-1);
    return answer;
}