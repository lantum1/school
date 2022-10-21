a=int(input())
b=int(input())
c=0
if a%2!=0 and b%2==0:
    b=b-1
elif a%2==0 and b%2!=0:
    b=b+1
k=max(a,b)
h=min(a,b)
c=(k-h)//2
print(c)
