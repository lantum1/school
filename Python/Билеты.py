a=int(input("Введите количество поездок: "))
c=a//60
c1=a%60
if c1>=38:
    c=c+1
    print(c," билет(ов) на 60 поездок, ")
    exit()
d=c1//20
d1=c1%20
if d1>=18:
    d=d+1
    print(c," билет(ов) на 60 поездок, ",d," билет(ов) на 20 поездок, ")
    exit()
e=d1//10
e1=d1%10
if e1>=8:
    e=e+1
    print(c," билет(ов) на 60 поездок, ",d," билет(ов) на 20 поездок, ",e," билет(ов) на 10 поездок, ")
    exit()
g=e1//5
g1=e1%5
print(c," билет(ов) на 60 поездок, ",d," билет(ов) на 20 поездок, ",e," билет(ов) на 10 поездок, ",g," билет(ов) на 5 поездок, ",g1," билет(ов) на 1 поездку")
exit()
