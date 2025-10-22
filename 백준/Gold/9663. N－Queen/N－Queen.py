dx=[-1,0,1]
board=[[0 for _ in range(15)] for _ in range(15)]
N=int(input())
ans=0
def dfs(depth):
    global N,ans
    if(depth==N):
        ans+=1
        return
    for i in range(N):
        if(board[i][depth]==0):
            for k in range(3):
                nextx=i+dx[k]
                nexty=depth+1
                while(nextx>=0 and nextx<N and nexty<N):
                    board[nextx][nexty]+=1
                    nextx+=dx[k]
                    nexty+=1
            dfs(depth+1)
            for k in range(3):
                nextx=i+dx[k]
                nexty=depth+1
                while(nextx>=0 and nextx<N and nexty<N):
                    board[nextx][nexty]-=1
                    nextx+=dx[k]
                    nexty+=1
dfs(0)
print(ans)