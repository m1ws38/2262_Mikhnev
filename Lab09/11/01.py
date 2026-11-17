def toint(fun):
    def wrapper(*args):
        return fun(*map(int, args))
    return wrapper


max_int = toint(max)
add_int = toint(lambda a, b: a + b)
power_int = toint(pow)

print(max_int('9', '10', '2'))  
print(add_int('12', 3.9))       
print(power_int('2', '5'))      