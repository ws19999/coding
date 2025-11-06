a,b=map(int,input().split(" "))
flag=False
for e in range(a+1,63):
    temp=2**e
    while temp>=10:
        temp//=10
    if temp==b:
        flag=True
        print(e)
        break
if flag is False:
    print(0)