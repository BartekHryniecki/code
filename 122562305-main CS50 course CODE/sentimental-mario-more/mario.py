# TODO
from cs50 import get_int

n = get_int("Height: ")
while n > 8 or n < 1:
    n = get_int("Height: ")

for i in range(n):

    for j in range(n - i - 1):
        print(" ", end = "")

    for j in range(i + 1):
        print("#", end = "")

    print("  ", end = "")

    for j in range(i + 1):
        print("#", end = "")

    print("")
