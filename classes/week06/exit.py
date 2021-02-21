import sys

if len(sys.argv) != 2:
    print("Missing comand-line-argument")
    sys.exit(1)
print(f"Hello, {sys.argv[1]}")
