list1=['zaina','ahmad','jordan','maan']
print("list before: ",list1)
#append
num0=input("Enter what you want insert in the last list  : ")
list1.append(num0)
print("list after: ",list1)
print("\n*************************\n")
#insert[x]
num1=input("Enter the index you want tp insert in: ")
num2=input("Enter what you want to insert: ")
list1.insert(int(num1),num2)
print("The index become: ",list1)
#remove
num3=input("Enter the elements you want to delete: ")
list1.remove(num3)
print("The index become: ",list1)
print("\n*************************\n")
#del[x]
num4=int(input("Enter the [index] you want remove^_^: "))
del list1[num4]
print("The index become: ",list1)
print("\n*************************\n")
#pop()بتمسح آخر عنصر أو اللي جوا القوس
list1.pop()          #empty
print("without index num: ",list1)
num5=int(input("Enter the num of index: "))
list1.pop(num5)
print("with index num: ",list1)
print("\n*************************\n")
##endddddddd>>>>>>>