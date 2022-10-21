n=int(input())
p=1
m=3
print(2, end=" ")
while p<n:
    k=0
    for i in range (2, m-1, 1):
        if m%i==0:
            k=1
        if k==1:
            break
    if k==0:
        print (m, end=" ")
        p=p+1
    m=m+1
        
