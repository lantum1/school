m=int(input())
n=int(input())
g=2
for i in range (m,n+1):
    print(m, ": ", end="")
    while g<=m/2:
        if m%g==0:
            print (g, ", ", end="")
        g=g+1
    m=m+1
    g=2
    print("; ", end="")
