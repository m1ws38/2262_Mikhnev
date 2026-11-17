lst = list(range(6000, 7000))
ans = max(lst, key=lambda number: bin(number).count('1'))
print(ans)