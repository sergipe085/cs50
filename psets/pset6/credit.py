from cs50 import get_string
import sys

# get input from user
number = get_string("Number: ")

a = ""
# intercalate in numbers of the input (x_x_x_x_x_x_) and add tu var with value * 2 (string format)
for i in range(len(number)):
    if i % 2 == 0:
        a += str(int(number[i]) * 2)

b = 0
# add to b all digits of a
for i in range(len(a)):
    b += int(a[i])

for i in range(len(number)):
    if i % 3 and i != 0 == 0:
        b += int(number[i])
        
lastNumber = str(b)[len(str(b)) - 1]

# verify if the card is valid and wich flag is the card
if lastNumber != 0 and len(number) in [13, 15, 16]:
    if number[0] + number[1] in ["34", "37"]:
        print("AMEX")
        sys.exit(0)
    if number[0] + number[1] in ["51", "52", "53", "54", "55"]:
        print("MASTERCARD")
        sys.exit(0)
    if number[0] in ["4"]:
        print("VISA")
        sys.exit(0)
        
print("INVALID")
sys.exit(1)

