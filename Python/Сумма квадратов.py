n=int(input("Введите N: "))
m=n**2
for i in range (n,2*n):
    n=n+1
    m=m+n**2
print(m)
