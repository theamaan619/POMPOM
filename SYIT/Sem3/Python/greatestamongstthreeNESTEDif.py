a=int(input('Enter value of a = '))
b=int(input('Enter value of b = '))
c=int(input('Enter value of c = '))
if a>b:
    if a>c:
        print('a is greatest = ',a)
    else:
        print('c is greatest = ',c)
elif b>c:
    print('b is greatest = ',b)
else:
        print('c is greatest = ',c)

