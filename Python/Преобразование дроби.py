a=int(input())
b=int(input())
c=int(input())
d=int(input())
k=0
for i in range (100):
    a=a+1
    b=b+1
    k=k+1
    if (a==b):
        a=a//b
        b=1
    elif (a%b==0):
        a=a//b
        b=1
    elif (b%a==0):
        b=b//a
        a=1
    if (a==c and b==d):
        print(k)
        exit()
print("0")
    
        
