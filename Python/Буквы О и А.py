a=input()
k=0
d=0
for i in range (len(a)):
    if a[i]=="а":
        k=k+1
    if a[i]=="о":
        d=d+1
if k>d:
    print("Букв А больше")
elif k<d:
    print("Букв О больше")
else:
    print("Кол-во букв одинаково")
