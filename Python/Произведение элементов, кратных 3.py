from random import random, randint
a=['']*20
c=1
for i in range (20):
    a[i]=randint(0,20)
    if a[i]%3==0 and a[i]!=0:
        b=a[i]
        c=c*b
print(a)
print(c)
