import math
m=int(input())
for i in range (1,int(math.sqrt(m))+1):
    f=i*i
    if m%f==0:
        c=f
print(c)
