a=int(input())
c=1
while a!=1:
    for g in range (2,a):
        if a%g==0:
            c=0
            b=g
            break
    if c==0:
        print(b, "; ", end="")
        a=a//b

