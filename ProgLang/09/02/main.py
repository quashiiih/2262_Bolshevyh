def sublist(lst, *num):
    return[lst[i] for i in num]


lst = [ 'Anna', 'Barbara', 'Clara', 'Diana', 'Eva', 'Flora']
print(sublist(lst, 0, 2, 5)) 
