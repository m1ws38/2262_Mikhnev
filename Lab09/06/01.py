def gen(n):
    while n != 1:
        yield n

        if n % 2 == 0:
            n //= 2
        else:
            n = 3 * n + 1

    yield n


print(*gen(7))
