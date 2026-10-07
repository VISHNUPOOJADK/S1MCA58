d1={}
d2={}
n=int(input("Enter number of elements in d1:"))
for i in range(n):
    key1=(input("enter the key:"))
    v1=int(input("enter the value:"))
    d1[key1]=v1

n=int(input("Enter number of elements in d2:"))
for i in range(n):
    key2=(input("enter the key:"))
    v2=int(input("enter the value:"))
    d2[key2]=v2
print("first dictionary:",d1)
print("second dictionary:",d2)
d=d1|d2
print("merged dictionaries:",d)

