N,P=map(int,input().split())
num=1
for i in range(2,N+1):
    num*=i
    num%=P
print(num)