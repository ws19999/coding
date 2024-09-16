import sys
input = sys.stdin.readline
N=int(input())
최소=[0,0,0]
최대=[0,0,0]
for _ in range(N):
    arr=list(map(int,input().split(" ")))
    최소[0],최소[1],최소[2]=min(최소[0],최소[1])+arr[0],min(최소[0],최소[1],최소[2])+arr[1],min(최소[1],최소[2])+arr[2]
    최대[0],최대[1],최대[2]=max(최대[0],최대[1])+arr[0],max(최대[0],최대[1],최대[2])+arr[1],max(최대[1],최대[2])+arr[2]
print(max(최대),min(최소))