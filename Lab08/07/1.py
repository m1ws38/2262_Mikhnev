for x in map(int, input().split()):
    if x < 0:
        print(x)
        break
else:
    print("No negative numbers")