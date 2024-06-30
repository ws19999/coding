T=int(input())
과목=list(map(int,input().split()))
for i in range(T+1,6):
    과목.append(0)
num1=0
num2=0
num3=0
if 과목[0]>과목[2]:
    num1=(과목[0]-과목[2])*508
else:
    num1=(과목[2]-과목[0])*108
if 과목[1]>과목[3]:
    num2=(과목[1]-과목[3])*212
else:
    num2=(과목[3]-과목[1])*305
num3=과목[4]*707
print((num1+num2+num3)*4763)