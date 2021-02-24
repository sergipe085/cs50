import sys
import csv
import re


def main():

    # if dont have 2 arguments print the usage and close the program
    if len(sys.argv) != 3:
        print("Usage: python dna.py data.csv sequence.txt")
        sys.exit(1)

    dnaStr = ""
    with open(sys.argv[2]) as dna:
        reader = csv.reader(dna)
        for i in reader:
            dnaStr = i[0]  # set the value of dnaStr

    count = {}
    with open(sys.argv[1]) as database:
        reader = csv.reader(database)
        firstRow = next(reader)
        for i in firstRow:
            if i != "name":
                count[i] = 0  # set the keys to count according to the database columns
        for i in count:
            # set the values to count according to dnaStr count of the strings (keys of count)
            count[i] = count_sequence_dna(i, dnaStr)  

        countArr = list(count.values())  # cast count (dictionary) to list
        print(search(reader, countArr))

# verify if the counter count is equal to any database count


def search(reader, countArr):
    for i in reader:
        count = 0
        for j in range(len(i)):
            if j != 0:
                if int(countArr[j - 1]) == int(i[j]):
                    count += 1

        if len(i) - 1 == count:
            return i[0]
    return "No match"


# count the sequences of dna
def count_sequence_dna(sequence, dna):
    max_repeated = 0
    for i in range(len(dna)):
        repeated = 0
        sequence_length = len(sequence)
        if (str(dna[i: i + sequence_length]) == sequence):
            while str(dna[i: i + sequence_length]) == sequence:
                repeated += 1
                i += sequence_length

            if repeated > max_repeated:
                max_repeated = repeated

    return max_repeated


main()
