import sys
input,print = sys.stdin.readline,sys.stdout.write 
N,용액,ans1,ans2,answer=int(input()),list(map(int,input().split(" "))),0,0,2000000001
start,end=0,N-1
while start<end:
    cur=abs(용액[start]+용액[end])
    if cur<answer:
        answer,ans1,ans2=cur,용액[start],용액[end]
    if cur>abs(용액[start]+용액[end-1]):
        end-=1
    else:
        start+=1
print(f"{ans1} {ans2}")