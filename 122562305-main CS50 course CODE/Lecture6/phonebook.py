import csv

file = open("phonebook.csv", "a")

name = input("Name: ")
number = input("Number: ")

writer = csv.writer(file)
writer.writerow([name, number])

file.close()


#-------------------------------

import csv

# Get name and number
name = input("Name: ")
number = input("Number: ")

# Open CSV file
with open("phonebook.csv", "a") as file:

    # Print to file
    writer = csv.DictWriter(file, fieldnames=["name", "number"])
    writer.writerow({"name": name, "number": number})

#---------------------------------------


people = {
    "Carter": "795 229 666",
    "David": "604 781 882"
}

name = input("Name: ")

if name in people:
    number = people[name]
    print(f"Number: {number}")