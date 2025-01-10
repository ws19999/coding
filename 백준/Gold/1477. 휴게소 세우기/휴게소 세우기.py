import sys
def bsearch(M,highway):
    localmin=1
    localmax=0
    answer=0
    for i in range(1,N+2):
        localmax=max(localmax,highway[i]-highway[i-1])
    while(localmin<=localmax):
        localmid = (localmax+localmin)//2
        cnt=0
        for i in range(1,N+2):
            cnt += (highway[i] - highway[i - 1]) // localmid - 1
            if ((highway[i] - highway[i - 1]) % localmid>0):
                cnt+=1
        if(cnt<=M):
            answer=localmid
            localmax=localmid-1
        else:
            localmin=localmid+1
    return answer
input,print = sys.stdin.readline,sys.stdout.write
N,M,L=map(int,input().split(" "))
if(N>0):
    highway=list(map(int,input().split(" ")))
    highway.append(0)
    highway.append(L)
    highway.sort()
else:
    highway=[0,L]
answer=bsearch(M,highway)
print(f"{answer}")