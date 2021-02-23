import sys

from cs50 import get_int


def main():
    while True:
        height = get_int("Height: ")
        # Verifying inputs
        if height < 9 and height > 0:
            break

    # calling the function do draw blocks
    drawLeftBlocks(height, 1)


def drawLeftBlocks(h, n):
    # draw blocks with recursion
    if (h > 0):
        print(" " * (h - 1), end="#" * n + "\n")
        drawLeftBlocks(h - 1, n + 1)


main()