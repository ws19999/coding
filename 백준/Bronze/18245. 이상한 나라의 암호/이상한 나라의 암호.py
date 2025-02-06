i=0
while True:
    i+=1
    string=input()
    if string=='Was it a cat I saw?':
        break
    a=0
    while True:
        if a>=len(string):
            break
        print(string[a:a+1],end='')
        a+=i+1
    print()