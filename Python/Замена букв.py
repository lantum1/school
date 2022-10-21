a=input()
e=0
s=""
for i in range (len(a)):
    if a[i]=="а":
        g=i
        s=s+a[e:g]+"б"
        e=i+1
    elif a[i]=="б":
        g=i
        s=s+a[e:g]+"а"
        e=i+1
    elif a[i]=="А":
        g=i
        s=s+a[e:g]+"Б"
        e=i+1
    elif a[i]=="Б":
        g=i
        s=s+a[e:g]+"А"
        e=i+1
for k in range (g+1,len(a)):
    s=s+a[k]
print(s)
        
