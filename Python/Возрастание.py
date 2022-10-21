a=float(input("Введите первое число: "))
b=float(input("Введите второе число: "))
c=float(input("Введите третье число: "))
if c<=a and c<=b:
    if a<=b:
        print(c, " ", a, " ", b, " ")
    else:
        print(c, " ", b, " ", a, " ")
elif b<=a and b<=c:
    if a<=c:
        print(b, " ", a, " ", c, " ")
    else:
        print(b, " ", c, " ", a, " ")
elif a<=b and a<=c:
    if b<=c:
        print(a, " ", b, " ", c, " ")
    else:
        print(a, " ", c, " ", b, " ")
