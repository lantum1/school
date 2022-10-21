a=int(input())
b=a
c=a
k=0
m=0
while a!=0:
    b=a%10
    a=a//10
    k=k+1
if k==5:
    print(c)
elif k<5:
    while m+k!=5:
        m=m+1
        print("0",end="")
    print(c)  
else:
    print(c%10**5)
