import sys
input,print = sys.stdin.readline,sys.stdout.write 
N=int(input())
nums=list(map(int,input().split(" ")))
nums.sort()
last,answer=0,0
for elem in nums:
    if(elem!=last+1):
        answer+=elem
    last=elem
print(f"{answer}")