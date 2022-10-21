x=int(input("Введите координату по оси x: "))
y=int(input("Введите координату по оси y: "))
if x>0 and y>0:
    print("I четверть")
elif x<0 and y>0:
    print("II четверть")
elif x<0 and y<0:
    print("III четверть")
elif x>0 and y<0:
    print("IV четверть")
else:
    print("Точка не находится в координатной четверти")
