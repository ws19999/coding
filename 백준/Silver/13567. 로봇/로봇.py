dx=[1,0,-1,0]
dy=[0,1,0,-1]
dir=0
valid=True
x=0
y=0
M,n=map(int,input().split())
for _ in range(n):
    commands,num=input().split()
    if(commands=="MOVE"):
        x+=dx[dir]*int(num)
        y+=dy[dir]*int(num)
        if(x>M or x<0 or y>M or y<0):
            valid=False
    else:
        if(num=='0'):
            dir=(dir+1)%4
        else:
            dir=(dir+3)%4
if(valid):
    print(x,y)
else:
    print(-1)