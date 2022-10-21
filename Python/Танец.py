n=int(input())
p=int(input())
k=int(input())
d=[ ]*n
e=0
x=0
y=0
l=0
for i in range (n):
   e=e+1
   d.append(e)
for i in range (1, k+1):
    if i%2!=0:
        for g in range (0, n, 2):
            x=d[g]
            y=d[g+1]
            d[g]=y
            d[g+1]=x
    elif i%2==0:
        for h in range (1, n-1, 2):
            if h==len(d)-3:
                x=d[h+2]
                y=d[h-len(d)+3]
                d[h+2]=y
                d[h-len(d)+3]=x
                l=1
            x=d[h]
            y=d[h+1]
            d[h]=y
            d[h+1]=x
for i in range (n):
   if d[i]==p:
      if i==0:
         print(d[n-1],' ',d[i+1],end=' ')
      elif i==n-1:
         print(d[i-1],' ',d[0],end=' ')
      else:
         print(d[i-1],' ',d[i+1], end=' ')
