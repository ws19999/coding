import sys
input = sys.stdin.readline
print = sys.stdout.write
N,M=map(int,input().split(" "))
trees=list(map(int,input().split(" ")))
low,high,answer=0,max(trees),0
while high>=low:
    mid=(low+high)//2
    temp=0
    for h in trees:
        if h-mid>0:
            temp+=h-mid
    if(temp>=M):
        answer=mid
        low=mid+1
    else:
        high=mid-1
print(f"{answer}")