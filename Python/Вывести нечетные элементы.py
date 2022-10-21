from random import random, randint
a=['']*20
c=0
k=0
for i in range (20):
    a[i]=randint(0,20)
print(a)
for i in range (20):
    if a[i]%2!=0:
        print(a[i], end=' ')
