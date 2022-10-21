a=int(input())
f=float
m=['']*a
for i in range (a):
    b=int(input())
    m[i]=b
for i in range (a):
    f=m[i]*0.75
    for d in range(a):
        if m[d]==f:
            print(m[d], end=' ')
            break
