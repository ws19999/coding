import sys
input = sys.stdin.readline
print = sys.stdout.write 
N=int(input())
용액=list(map(int,input().split(" ")))
ans1,ans2,answer=0,0,2000000001
for a in range(0,N-1):
    start,end=a+1,N-1
    while start<=end:
        mid=(start+end)//2
        if 용액[a]+용액[mid]==0:
            ans1,ans2,answer=용액[a],용액[mid],0
            break
        elif 용액[a]+용액[mid]>0:
            if abs(용액[a]+용액[mid])<answer:
                ans1,ans2,answer=용액[a],용액[mid],abs(용액[a]+용액[mid])
            end=mid-1
        else:
            if abs(용액[a]+용액[mid])<answer:
                ans1,ans2,answer=용액[a],용액[mid],abs(용액[a]+용액[mid])
            start=mid+1
    if answer==0:
        break
print(f"{ans1} {ans2}")