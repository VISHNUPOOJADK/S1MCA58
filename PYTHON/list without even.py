li=list(map(int,input("enter the list elements:").split()))
for i in li:
    if i%2==0:
        li.remove(i)
print("list:",li) 
        
