a=input()
m=int(input())
n=int(input())
m=m-1
k=0
for i in range (m,n):
    if ord(a[i])==54:
        k=k+1
if k>=3:
    print("Образует")
else:
    print("Не образует")
