from cs50 import get_string
import sys

phonebook = {
    "Jorge": "+55 85 94587-1234",
    "Pao": "+55 85 99999-9999"
}

s = get_string("Name: ")

if s in phonebook:
    number = phonebook[s]
    print(f"{number}")
    sys.exit(0)
print("Name not founded")    
sys.exit(1)
    
    
