g=0
k=int(input())
from random import random, randint
a=['']*20
b=['']*0
if k>19:
    print("Введите значение меньше!")
elif k<0:
    print("Введите значение больше!")
else:
    for i in range (20):
        a[i]=randint(-100,100)
        if i!=k:
            b=b+['']
            b[g]=a[i]
            g=g+1
    print(a)
    print(b)
