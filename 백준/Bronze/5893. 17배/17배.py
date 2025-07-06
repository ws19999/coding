n=input()
num=0
for i in range(len(n)):
    num*=2
    if n[i]=='1':
        num+=1
num*=17
ans=""
while num>0:
    if num%2==1:
        ans="1"+ans
    else:
        ans="0"+ans
    num//=2
print(ans)