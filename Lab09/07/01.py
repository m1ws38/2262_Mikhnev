def every_other(seq):
    for index, item in enumerate(seq):
        if index % 2 == 0:
            yield item


print(*every_other([10, 20, 30, 40, 50]))       
print(*every_other(range(10)))                  
print(*every_other(iter(range(10))))            
print(sum(every_other(map(int, '2 5 11 3 8'.split()))))  