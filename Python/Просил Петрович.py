import random
n=random.randint(1,1000)
s=0
c=0
k=0
d=0
M=[]
for i in range(n):
    a=random.randint(1,10000)
    b=a
    s=int(a%10+a//10%10+a//10//10%10+a//10//10//10%10+a//10//10//10/10%10)
    M.append(s)
    s=0
M.sort()
a=M[0]
for i in range(n):
    if M[i]==a:
        k=k+1
    if M[i]!=a:
        if c<=k and a>=d:
            c=k
            d=a
        k=1
    a=M[i]
print(d,c)
