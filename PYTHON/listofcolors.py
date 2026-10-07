l1=set(input("enter colors in list1:").split())
l2=set(input("enter colors in list2:").split())
diff=list(l1.difference(l2))
print("colors in list1 not in list2:",diff)


