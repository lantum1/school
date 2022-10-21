a=int(input())
k=0
n=0
while a!=0:
    if a%10%2==0 and a&10==0:
        k=k+1
    else:
        n=n+1
    a=a//10
print(k," ",n)
