N=int(input())
mins=[0,0,0]
maxs=[0,0,0]
for _ in range(N):
    arr=list(map(int,input().split(" ")))
    mins[0],mins[1],mins[2]=min(mins[0],mins[1])+arr[0],min(mins[0],mins[1],mins[2])+arr[1],min(mins[1],mins[2])+arr[2]
    maxs[0],maxs[1],maxs[2]=max(maxs[0],maxs[1])+arr[0],max(maxs[0],maxs[1],maxs[2])+arr[1],max(maxs[1],maxs[2])+arr[2]
print(max(maxs),min(mins))