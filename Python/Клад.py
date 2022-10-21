s=str(input())
n=[]
a=0
b=0
c=0
d=0
f=0
g=0
w=0
l=0
h=0
for i in range(0, len(s)):
    if s[i]=='N' or s[i]=='S' or s[i]=='W' or s[i]=='E':
        n.append(w)
        w=0
        continue
    w=w+1
l=int(n[0])-1
for i in range (0, len(s)):
    if s[i]=='N':
        a=a+g
        g=0
        h=h+1
        if i==len(s)-1:
            break  
        l=int(n[h])-1
        continue
    if s[i]=='S':
        b=b+g
        g=0
        h=h+1
        if i==len(s)-1:
            break
        l=int(n[h])-1
        continue
    if s[i]=='W':
        c=c+g
        g=0
        h=h+1
        if i==len(s)-1:
            break
        l=int(n[h])-1
        continue
    if s[i]=='E':
        d=d+g
        g=0
        h=h+1
        if i==len(s)-1:
            break
        l=int(n[h])-1
        continue
    g=g+int(s[i])*(10**l)
    l=l-1
if a>b:
    f=a-b
    print(f,end="")
    print('N',end="")
elif b>a:
    f=b-a
    print(f, end="")
    print("S", end="")
if c>d:
    g=c-d
    print(g, end="")
    print("W", end="")
elif d>c:
    g=d-c
    print(g, end="")
    print('E', end="")

