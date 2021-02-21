from cs50 import get_int

scores = []

for i in range(get_int("Amount of scores: ")):
    scores.append(get_int("Score: "))

print(f"Avarage: {(sum(scores) / len(scores))}")
