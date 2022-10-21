a=input()
k=0
b=0
a=a.replace(" ","")
for i in range (len(a)):
    k=k+1
if k%2!=0:
    h=k//2
    for i in range (len(a)):
        if i<h:
            if a[i]==a[h-i+h]:
                b=b+1
        else:
            break
else:
    h=k//2-1
    for i in range (len(a)):
        if i<k//2:
            if a[i]==a[h-i+h+1]:
                b=b+1
        else:
            break
if b==k//2:
    print("Это палиндром")
else:
    print("Это не палиндром")
        
