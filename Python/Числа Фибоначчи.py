n=int(input())
f1=1; f2=1;
print(f1,f2,end=" ")
for i in range (2,n):
    fn=f1+f2
    print(fn,end=" ")
    f1=f2
    f2=fn
