import csv

with open("favorites.csv", "r") as file:
    reader = csv.DictReader(file)
    counts = {}
    for now in reader:
        favourite = row["problem"]
        if favourite in counts:
            counts [favourite] =+ 1
        else:
            counts [favourite] = 1

favourite = input("Favourite: ")
if favourite in counts:
    print(f"{favourite}: {counts[favourite]}")




from cs50 import SQL
db = SQL("sqlite:///favorites.db")

favourite = input("Favourite: ")

rows = db.execute("SELECT COUNT(*) AS n FROM favourites WHERE problem = 'Mario'")

rows [0]
print(rows["n"])

