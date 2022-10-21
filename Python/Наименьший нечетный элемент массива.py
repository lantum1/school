from random import random, randint
min=0
min1=20
a=['']*20
c=0
k=0
for i in range (20):
    a[i]=randint(0,20)
    if a[i]%2!=0 or a[i]==0:
        min=a[i]
        if min<min1:
            min1=min
print(a)
print(min1)
