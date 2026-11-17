def toint(fun):
    def wrapper(*args):
        return fun(*map(int, args))
    return wrapper


add = toint(lambda a, b: a + b)
print(add('2', '3'))
print(max('10', '9', '100'))
print(toint(max)('10', '9', '100'))


@toint
def mul(a, b):
    return a * b


print(mul('6', '7'))
print(toint(pow)('2', '10'))
print(toint(divmod)('17', '5'))