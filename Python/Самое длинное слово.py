a=input()
max=0
max1=0
k=0
h=0
c=0
for i in range (len(a)):
    if a[i]==" ":
        g=i
        if max1<max:
            max1=max
        max=-1
    max=max+1
for k in range (g+1, len(a)):
    h=h+1
if h>max1:
    max1=h
else:
    max1=max1
for i in range (len(a)):
    c=c+1
    if i+1<=len(a)-1:
        if a[i]!=" " and a[i+1]==" ":
            x=i
            if c==max1:
                for f in range (x-c+1,x+1):
                    print(a[f], end="")
                quit()
            c=-1
for n in range (x+2, len(a)):
    print(a[n],end="")
                

    
