a=input()
k=0
d=0
for i in range (len(a)):
    if a[i]==",":
        k=k+1
    if a[i]=="0" or a[i]=="1" or a[i]=="2" or a[i]=="3" or a[i]=="4" or a[i]=="5" or a[i]=="6" or a[i]=="7" or a[i]=="8" or a[i]=="9":
        d=d+1
if k>d:
    print("Запятых больше")
elif k<d:
    print("Цифр больше")
else:
    print("Кол-во запятых и цифр одинаково")
