lst = [1, 'abc', 2, 3, 4, 'aa']
nums = [item for item in lst if type(item) is not str]
print(nums)