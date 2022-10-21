from random import random, randint
f=int(input())
a=['']*20
c=0
k=0
for i in range (20):
    a[i]=randint(0,20)
    if a[i]>f:
        b=a[i]
        c=c+b
        k=k+1
c=c/k
print(a)
print(c)
