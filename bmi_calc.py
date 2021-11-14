request = 'Да'
while request == 'Да':
    h = float(input('Рост в см : ')) / 100
    w = float(input('Вес в кг: '))
    bmi = w/h**2
    print(bmi)
    if bmi > 25:
        print('Перевес')
    elif bmi >= 18.5:
        print('Норм')
    else:
        print('Недовес')
    request = input('Повторить? (Да/Нет)')
print('Ок.')
