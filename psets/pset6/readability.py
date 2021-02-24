from cs50 import get_string
import sys

textInput = get_string("Text: ")

letterCount = 0
sentenceCount = 0
for word in textInput:
    # if is a valid letter add to letter count
    if word.lower() >= 'a' and word.lower() <= 'z':
        letterCount += 1
    # if is a end sentence simble add 1 to sentence count    
    elif word in ["?", ".", "!"]:
        sentenceCount += 1

# transform the text string to an array of string 
textInput = textInput.split(" ")
wordsCount = len(textInput)

# make the avarages
L = (letterCount / wordsCount) * 100
S = (sentenceCount / wordsCount) * 100

# make tha grade calc
grade = round(0.0588 * L - 0.296 * S - 15.8)

# print grade
if grade < 16 and grade >= 1:
    print(f"Grade {grade}")
    sys.exit(0)
elif grade < 1:
    print(f"Before Grade 1")
    sys.exit(0)
print("Grade 16+")    
sys.exit(0)
    