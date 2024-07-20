n,m,r,c,k=map(int,input().split())
dx,dy=[0,0,0,-1,1],[0,1,-1,0,0]
maps=[list(map(int,input().split())) for _ in range(n)]
lists=list(map(int,input().split()))
top,bottom,front,back,left,right=0,0,0,0,0,0
for elem in lists:
    if r+dx[elem]<0 or r+dx[elem]>=n or c+dy[elem]<0 or c+dy[elem]>=m:
        continue
    r,c=r+dx[elem],c+dy[elem]
    if elem==1:
        top,right,bottom,left=left,top,right,bottom
    elif elem==2:
        top,left,bottom,right=right,top,left,bottom
    elif elem==3:
        top,front,bottom,back=back,top,front,bottom
    elif elem==4:
        top,back,bottom,front=front,top,back,bottom
    if maps[r][c]==0:
        maps[r][c]=bottom
    else:
        bottom=maps[r][c]
        maps[r][c]=0
    print(top)