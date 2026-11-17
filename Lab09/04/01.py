lst = ['hello', 'hell', 'bye', 'world', 'bybye']
lst.sort(key=lambda word: (len(word), word))
print(lst)  