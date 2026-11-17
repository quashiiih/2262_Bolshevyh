lst = list(range(6000 ,7000))
x = max(lst, key = lambda x: bin(x).count('1'))
print(x)
print(bin(x))