from random import random, randint
a=['']*20
b=0
c=0
for i in range (20):
    a[i]=randint(0,20)
    b=a[i]
    c=c+b
print(a)
print(c)
