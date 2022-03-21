x = float(input('Введите x '))
sum = 0.
n = 1.
sl = 1.
while (sl >= 0.000001):
    sl = ((x-2)**n)/((2*n+1)*(4*n+3))
    sum += sl
    n+=1
print (str(sum))