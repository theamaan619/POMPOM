list1 = [1,2,3,4,5,6,7,8,9,10]
list1 = [x for (i,x) in enumerate(list1) if i not in (0,2,4,5)]
print(list1)
