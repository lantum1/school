n, a, b, c = map(int, input().split())
d=n
e=n
f=n
k=n
l=n
min=0
min1=n
v=[]*6
for i in range (a):
    d=d//2
for i in range (b):
    d=(d+1)//2
for i in range (c):
    if c==0:
        break
    d=(d-1)//2
v.append(d)
for i in range (a):
    e=e//2
for i in range (c):
    if c==0:
        break
    e=(e-1)//2
for i in range (b):
    e=(e+1)//2
v.append(e)
for i in range (b):
    f=(f+1)//2
for i in range (a):
    f=f//2
for i in range (c):
    if c==0:
        break
    f=(f-1)//2
v.append(f)
for i in range (b):
    k=(k+1)//2
for i in range (c):
    if c==0:
        break
    k=(k-1)//2
for i in range (a):
    k=k//2
v.append(k)
for i in range (c):
    if c==0:
        break
    l=(l-1)//2
for i in range (b):
    l=(l+1)//2
for i in range (a):
    l=l//2
v.append(l)
for i in range (c):
    if c==0:
        break
    n=(n-1)//2
for i in range (a):
    n=n//2
for i in range (b):
    n=(n+1)//2
v.append(n)
for i in range (6):
    min=v[i]
    if min<min1:
        min1=min
print(min1)
