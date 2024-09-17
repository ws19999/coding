n=int(input())
table,table1=[],[]
for i in range(1,10):
    for j in range(1,10):
        if j==i:
            continue
        for k in range(1,10):
            if k==i or k==j:
                continue
            table.append(i*100+j*10+k)
            table1.append(i*100+j*10+k)
for _ in range(n):
    num,strike,ball=map(int,input().split())
    num1,num2,num3=num//100,num//10-10*(num//100),num%10
    for s in table:
        strike1,ball1=0,0
        i,j,k=s//100,s//10-10*(s//100),s%10
        if num1==i:
            strike1+=1
        elif num1==j or num1==k:
            ball1+=1
        if num2==j:
            strike1+=1
        elif num2==i or num2==k:
            ball1+=1
        if num3==k:
            strike1+=1
        elif num3==i or num3==j:
            ball1+=1
        if strike1==strike and ball1==ball:
            continue
        elif s in table1:
            table1.remove(s)
print(len(table1))