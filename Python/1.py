a=[[1,1,1,1],[1,1,0,0],[1,1,1,0],[0,0,0,1]]
b=[[0,0,0,0],[0,0,0,0],[0,0,0,0],[0,0,0,0]]
l=0
for l in range(0,4):
    print("l ",l)
    for i in range(0,4):
        for j in range(0,4):
            b[i][j]=a[i][j]+(a[i][l]*a[l][j])
            print(b[i][j],end=' ')
        print()
    a=b