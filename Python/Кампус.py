n, k, x, y = map(int, input().split())
q=int(input())
max=0
max1=0
j=0
g=0
h=0
a=[ ]*q
for i in range(q):
    m=int(input())
    a.append(m)
    max=m
    if max1<max:
        max1=max
for i in range (max1):
    g=g+1
    if g%k==0:
        for b in range (x):
            h=h+1
            if h==a[j]:
                if g>n:
                    while(g>n):
                        g=g-n
                    print(g)
                    if q-1==j:
                        exit(0)
                    j=j+1
                else:
                    print(g)
                    if q-1==j:
                        exit(0)
                    j=j+1
    else:
        for d in range (y):
            h=h+1
            if h==a[j]:
                if g>n:
                    while (g>n):
                        g=g-n
                    print(g)
                    if q-1==j:
                        exit(0)
                    j=j+1
                else:
                    print(g)
                    if q-1==j:
                        exit(0)
                    j=j+1
    
