# Практикум Python 4

## Задание 1

```python
n = int(input())
count = 0
number = 1

while count < n:
    number += 1
    divisor = 2

    while number % divisor != 0:
        divisor += 1

    if divisor == number:
        count += 1

print(number)
```

## Задание 2

```python
n = int(input())
dresses = input().split()

seen = []
answer = n

for i in range(n):
    if dresses[i] not in seen:
        seen.append(dresses[i])

    if len(seen) == 3:
        answer = i + 1
        break

print(answer)
```

## Задание 3

```python
from string import ascii_lowercase

word = input()
max_count = 0
best_letter = ''

for letter in ascii_lowercase:
    count = word.count(letter)
    if count > max_count:
        max_count = count
        best_letter = letter

print(word.replace(best_letter, ''))
```

## Задание 4

```python
n = int(input())
rows = ['1234567890', 'qwertyuiop', 'asdfghjkl', 'zxcvbnm']

for _ in range(n):
    password = input()
    count = 0

    for row in rows:
        for char in password:
            if char in row:
                count += 1
                break

    if count == 4:
        print('strong')
    else:
        print('weak')
```

## Задание 5

```python
trump = input()
n = int(input())

ranks = ['6', '7', '8', '9', '10', 'Jack', 'Queen', 'King', 'Ace']
answers = []

for _ in range(n):
    rank1, suit1 = input().split()  # карта хода
    rank2, suit2 = input().split()  # карта отбоя

    if suit1 == suit2 and ranks.index(rank2) > ranks.index(rank1):
        answers.append(1)
    elif suit2 == trump and suit1 != trump:
        answers.append(1)
    else:
        answers.append(0)

print(*answers)
```
