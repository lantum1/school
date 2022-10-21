a=float(input("Введите a: "))
b=float(input("Введите b: "))
c=float(input("Введите c: "))
if a==0:
    if b==0:
        print("X - любое число")
    else:
        print("Решений нет")
else:
    d=b**2-4*a*c
    if d<0:
        print("Вещественных корней нет")
    else:
        if d==0:
            x1=-b*(2*a)
            x2=x1
            print(x1, " ", x2)
        else:
            import math
            x1=(-b+math.sqrt(d))/(2*a)
            x2=(-b-math.sqrt(d))/(2*a)
            print (x1, " ", x2)
