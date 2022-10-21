a=float(input("Введите a: "))
b=float(input("Введите b: "))
if a==0:
    if b==0:
        print("X - любое число")
    else:
        print("Решений нет")
else:
    x=b//a
    print (x)
