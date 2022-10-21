a=input()
k=0
c=1
d=2
for i in range (len(a)):
    if i-1<len(a) and c<len(a) and d<=len(a) :
         if a[i]=="и" and a[c]=="л" and a[d]=="и":
            k=k+1
    c=c+1
    d=d+1
    print(i,c,d)
print(k)
