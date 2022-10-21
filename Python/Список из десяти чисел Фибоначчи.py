f1=1
f2=1
a=['']*8
for i in range (8):
    fn=f1+f2
    a[i]=fn
    f1=f2
    f2=fn
print([1,1]+a)

