k=int(input())
n=int(input())
a=[]*n
c=1
l=0
h=0
j=k
v=0
v1=0
for i in range (n):
    b=int(input())
    a.append(b)
i=0
while(c<=n):
    if j==0:
        j=k
        l=0
        c=1
        i=0
        v1=v1+v*2
        v=0
    v=v+1
    if int(a[i])>j:
        a[i]=a[i]-k
        j=0
        i=0
        continue
    l=l+a[i]
    a[i]=0
    i=i+1
    j=k-l
    if c==n:
        break
    c=c+1
print(v*2+v1)
    
