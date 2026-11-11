lst = [3, 1, 2]
print(sorted(lst), lst)
print(lst.sort(), lst)
print(lst.append(7), lst) 

import random
print(random.randint(1, 100), random.randint(1, 100)) 


def rev(x):
    return x[::-1]


tail_len = 3


def tail(x):
    return x[-tail_len:]


a = [1, 2, 3, 4, 5]
print(rev(a), a)
print(tail(a))
tail_len = 2
print(tail(a))
