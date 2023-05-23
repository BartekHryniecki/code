from sys import argv

if len(argv) == 2:
    print(f"Hello, {argv[1]}")
else:
    print("hello, word")



import sys

if len(sys.argv) != 2:
    print("Missing command-line argument")
    sys.exit(0)

print(f"hello, {sys.argv[1]}")
sys.exit(1)
