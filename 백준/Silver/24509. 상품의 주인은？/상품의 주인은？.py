import sys
class student:
    def __init__ (self,num,kor,eng,math,sci,price=0):
        self.num=num
        self.kor=kor
        self.eng=eng
        self.math=math
        self.sci=sci
        self.price=price
input=sys.stdin.readline
n=int(input())
students=[]
for _ in range(n):
    a,b,c,d,e=map(int,input().split())
    students.append(student(a,b,c,d,e))
students.sort(key=lambda x: (-x.kor,x.num))
i=0
while students[i].price!=0:
    i+=1
students[i].price+=1
print(students[i].num,end=' ')
students.sort(key=lambda x: (-x.eng,x.num))
i=0
while students[i].price!=0:
    i+=1
students[i].price+=1
print(students[i].num,end=' ')
students.sort(key=lambda x: (-x.math,x.num))
i=0
while students[i].price!=0:
    i+=1
students[i].price+=1
print(students[i].num,end=' ')
students.sort(key=lambda x: (-x.sci,x.num))
i=0
while students[i].price!=0:
    i+=1
students[i].price+=1
print(students[i].num,end=' ')