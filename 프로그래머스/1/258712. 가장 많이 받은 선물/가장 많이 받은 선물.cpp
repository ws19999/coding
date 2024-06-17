#include <string>
#include <vector>
#include <unordered_map>
using namespace std;
unordered_map<string,int> scores;
unordered_map<string,int> records;
unordered_map<string,int> nextmonth;
int solution(vector<string> friends, vector<string> gifts) {
    int answer = 0;
    for(auto i:gifts)
    {
        records[i]++;
        string sender="",receiver="";
        bool first=true;
        for(int a=0;a<i.length();a++)
        {
            if(i[a]==' ')first=false;
            else
            {
                if(first)sender+=i[a];
                else receiver+=i[a];
            }
        }
        scores[sender]++;
        scores[receiver]--;
    }
    for(int i=0;i<friends.size();i++)
    {
        for(int j=i+1;j<friends.size();j++)
        {
            if(records[friends[i]+" "+friends[j]]<records[friends[j]+" "+friends[i]])nextmonth[friends[j]]++;
            else if(records[friends[i]+" "+friends[j]]>records[friends[j]+" "+friends[i]])nextmonth[friends[i]]++;
            else
            {
                if(scores[friends[i]]<scores[friends[j]])nextmonth[friends[j]]++;
                else if(scores[friends[j]]<scores[friends[i]])nextmonth[friends[i]]++;
            }
            answer=max(answer,nextmonth[friends[i]]);
            answer=max(answer,nextmonth[friends[j]]);
        }
    }
    return answer;
}