from collections import deque
n,m=map(int,input().split())
table=[0 for _ in range(n+1)]
graph=[[0 for _ in range(n+1)] for _ in range(n+1)]
ans=0
for _ in range(m):
    u,v=map(int,input().split())
    graph[u][v]=1
    graph[v][u]=1
for i in range(1,n+1):
    if table[i]==0:
        dq=deque()
        dq.append(i)
        table[i]=1
        cnt=1
        while len(dq)>0:
            num=dq.pop()
            for j in range(1,n+1):
                if graph[num][j]==1 and table[j]==0:
                    table[j]=1
                    cnt+=1
                    dq.appendleft(j)
        ans+=1
print(ans)