g=0
from random import random, randint
a=['']*20
b=['']*0
for i in range (20):
    a[i]=randint(10,20)
    if a[i]!=13:
        b=b+['']
        b[g]=a[i]
        g=g+1
print(a)
print(b)

