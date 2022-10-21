from random import random, randint
max=0
max1=0
a=['']*20
c=0
k=0
for i in range (20):
    a[i]=randint(0,20)
    max=a[i]
    if max1<max:
        max1=max
        g=i
print(a)
print(max1)
print(g)
