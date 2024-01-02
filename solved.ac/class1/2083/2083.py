while(True):
    result = input().split(' ')

    if result == ['#','0','0']:
        break

    name,age,weight = result[0], int(result[1]) , int(result[2])

    if (age > 17 or weight >=80):
        print(name + ' Senior')
    else:
        print(name + ' Junior')

