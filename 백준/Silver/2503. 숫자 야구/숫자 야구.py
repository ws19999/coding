import sys
input = sys.stdin.readline
print = sys.stdout.write
N=int(input())
arr=[]
for a in range(1,10):
    for b in range(1,10):
        if(a==b):
            continue
        for c in range(1,10):
            if(c==a or c==b):
                continue
            arr.append(a*100+b*10+c)
for _ in range(N):
    num,s,b=map(int,input().split(" "))
    k=0
    while(True):
        민혁=[num//100,(num//10)%10,num%10]
        영수=[arr[k]//100,(arr[k]//10)%10,arr[k]%10]
        스트라이크,볼=0,0
        for i in range(0,3):
            for j in range(0,3):
                if(영수[i]==민혁[j]):
                    if(i==j):
                       스트라이크+=1
                    else:
                       볼+=1
        if(스트라이크==s and 볼==b):
            if(arr[k]==arr[-1]):
                break
            k+=1
        else:
            if(arr[k]==arr[-1]):
                del arr[k]
                break
            del arr[k]
print(f"{len(arr)}")