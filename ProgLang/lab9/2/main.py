def sublist(seq, *positions):
    return [seq[i] for i in positions]


lst = ['Anna', 'Barbara', 'Clara', 'Diana', 'Eva', 'Flora']
print(sublist(lst, 0, 2, 5))
print(sublist(lst))
print(sublist(lst, 0, 1, 2, 3, 4, 5))
print(sublist(tuple(lst), 1, 3))
