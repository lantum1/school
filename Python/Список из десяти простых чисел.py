n=10
p=0
m=101
a=['']*10
h=0
while p<n:
    k=0
    for i in range (2, m-1, 1):
        if m%i==0:
            k=1
        if k==1:
            break
    if k==0:
        a[h]=m
        p=p+1
        h=h+1
    m=m+1
print(a)
        
