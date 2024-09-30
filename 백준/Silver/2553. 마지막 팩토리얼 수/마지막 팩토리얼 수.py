from math import factorial
N = int(input())
str_n = str(factorial(N))[::-1]
for i in str_n :
    if i != '0' :
        print(i)
        break