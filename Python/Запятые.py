a=input()
k=0
for i in range(len(a)):
    if a[i]==",":
        k=k+1
if k>0:
    print("Есть")
else:
    print("Нет")
