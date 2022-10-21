s=int(input())
k=0
for i in range (100,999,1):
    if i//100 + i%100//10 + i%10==s: k+=1
print (k)
