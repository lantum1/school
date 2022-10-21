a=input()
b=input()
c=input()
d=[]*9
e=0
f=0
v=0
g=0
for i in range(len(a)):
    if a[i]==':' or i+1==len(a):
        if i+1==len(a):
            g=int(a[i-1]+a[i])
            d.append(g)
            break
        g=int(a[i-2]+a[i-1])
        d.append(g)
for i in range(len(b)):
    if b[i]==':' or i+1==len(b):
        if i+1==len(b):
            g=int(b[i-1]+b[i])
            d.append(g)
            break
        g=int(b[i-2]+b[i-1])
        d.append(g)
for i in range(len(c)):
    if c[i]==':' or i+1==len(c):
        if i+1==len(c):
            g=int(c[i-1]+c[i])
            d.append(g)
            break
        g=int(c[i-2]+c[i-1])
        d.append(g)
if d[0]<d[6]:
    e=d[6]-d[0]
    if e%2==0:
        e=e//2
    elif e%2>0.5:
        e=e//2+1
    else:
        e=e//2
if d[1]<d[7]:
    f=d[7]-d[1]
    if f%2==0:
        f=f//2
    elif f%2>0.5:
        f=f//2+1
    else:
        f=f//2
elif d[1]>d[7]:
    f=d[1]-d[7]
    if f%2==0:
        f=f//2
    elif f%2>0.5:
        f=f//2+1
    else:
        f=f//2
if d[2]<d[8]:
    v=d[8]-d[2]
    if v%2==0:
        v=v//2
    elif v%2>0.5:
        v=v//2+1
    else:
        v=v//2
elif d[2]>d[8]:
    v=d[2]-d[8]
    if v%2==0:
        v=v//2
    elif v%2>0.5:
        v=v//2+1
    else:
        v=v//2
d[3]=d[3]+e
if d[3]>=24:
    while(d[3]>=24):
        d[3]=d[3]-24
d[4]=d[4]+f
if d[4]>=60:
    while(d[4]>=60):
        d[4]=d[4]-60
        d[3]=d[3]+1
d[5]=d[5]+v
if d[5]>=60:
    while(d[5]>=60):
        d[5]=d[5]-60
        d[4]=d[4]+1
print(d[3], ':', d[4] , ':', d[5])
