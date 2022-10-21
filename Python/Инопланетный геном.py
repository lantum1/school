a=input()
b=input()
h=0
for i in range (len(a)):
    if i+1<len(a):
        for g in range(len(b)):
            if g+1<len(b):
                if a[i]==b[g] and a[i+1]==b[g+1]:
                    h=h+1
                    break
            else:
                break
    else:
        break
print(h)
