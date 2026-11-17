import random

lst = [3, 1, 2]
print(sorted(lst), lst)
print(lst.sort(), lst)
print(lst.append(7), lst)
print(random.randint(1, 100), random.randint(1, 100))


def rev(x):
    return x[::-1]


tl = 3


def tail(x):
    return x[-tl:]


a = [1, 2, 3, 4, 5]
print(rev(a), a)
print(tail(a))
tl = 2
print(tail(a))