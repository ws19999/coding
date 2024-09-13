arr=[0 for _ in range(12)]
arr[0]=1
for i in range(1,12):
    for j in range(-3,0):
        if i+j>=0:
            arr[i]+=arr[i+j]
T=int(input())
for _ in range(T):
    n=int(input())
    print(arr[n])