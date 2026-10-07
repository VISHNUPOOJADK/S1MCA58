d={}
n=int(input("Enter number of elements:"))
for i in range(n):
    key=(input("enter the key:"))
    v=int(input("enter the value:"))
    d[key]=v
asc=dict(sorted(d.items(),key=lambda x:x[1]))
print("ascending order:",asc)
des=dict(sorted(d.items(),key=lambda x:x[1],reverse=True))
print("descending order:",des)

