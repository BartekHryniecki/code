from cs50 import get_string
from cs50 import get_int

number = get_string("Number: ")
length = len(number)

if length == 13 or length == 15 or length == 16:
    credit1 = int(number)
    sum2 = 0
    sum3 = 0
    while credit1 > 0:
        x1 = credit1 % 10
        credit1 = credit1 // 10
        sum2 = sum2 + x1

        x2 = credit1 % 10
        credit1 = credit1 // 10
        x2 = 2 * x2
        a2 = x2 % 10
        b2 = x2 // 10
        sum3 = sum3 + a2 + b2

    sum1 = sum2 + sum3
    sum1 = sum1 % 10

    if sum1 == 0:
        credit = int(number)
        while credit > 100:
            credit = credit // 10
        if credit == 34 or credit == 37:
            print("AMEX")
        elif credit == 51 or credit == 52 or credit == 53 or credit == 54 or credit == 55:
            print("MASTERCARD")
        elif credit // 10 == 4:
            print("VISA")
        else:
            print("INVALID")
    else:
        print("INVALID")
else:
    print("INVALID")k
