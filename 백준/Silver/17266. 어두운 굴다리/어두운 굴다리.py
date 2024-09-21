import sys
input = sys.stdin.readline
print = sys.stdout.write
N=int(input())
M=int(input())
가로등=list(map(int,input().split(" ")))
answer=max(가로등[0],N-가로등[-1])
for i in range(1,M):
    answer=max(answer,(가로등[i]-가로등[i-1]+1)//2)
print(f"{answer}")