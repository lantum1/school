a=input()
e=0
for i in range (len(a)):
    e=e+1
    if a[i]=="/":
        g=i
        for k in range (g-e+1,g):
            print(a[k], end="")
        e=0
        print(" ")
for d in range (g+1, len(a)):
    print(a[d], end="")
