a=int(input())
b=a+1
c=a+1
d=a+1
g=a+1
a=a+1
e=0
f=0
x=0
k=0
l=0
z=0
n=0
while e!=1:
    while c!=0:
        d=c%10
        c=c//10
        k=k+1
    n=k
    k=k//2
    if n%2==0:
        while l<k:
            b=a%10
            a=a//10
            f=f+b
            l=l+1
    elif k%2!=0:
        while l<k+1:
            b=a%10
            a=a//10
            f=f+b
            l=l+1
    l=0
    while l<k:
        b=a%10
        a=a//10
        x=x+b
        l=l+1
    if x==f:
        e=1
        if n%2==0:
            print(g)
        elif n%2!=0:
            print('0',g,sep='')
        break
    g=g+1
    a=g
    b=g
    c=g
    d=g
    k=0
    l=0
    f=0
    x=0
        
