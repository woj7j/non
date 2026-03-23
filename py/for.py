grades=[]  


for gra in range(5):
    insert=int(input("Enter the five Grades: "))
    grades.append(insert)



print("The Grades is: ",grades)
print("*************************")
#حساب عدد الناجحين
passed_student=0
for gra in grades:
  if gra>=50:
                 passed_student+=1


print("The number of passed students is : ",passed_student)

print("*************************")
#إضافة بونص
sto1=input("If you want to bouns click (ok): ")
if sto1=="ok":
  new=[]
for gra in grades:
        neww=gra+5
        new.append(neww)


print("the grades after bouns: ",new)
print("*************************")    
********************************
grades=[]  


for gra in range(5):
    insert=int(input("Enter the five Grades: "))
    grades.append(insert)



print("The Grades is: ",grades)
print("*************************")
#حساب عدد الناجحين
passed_student=0
for gra in grades:
  if gra>=50:
                 passed_student+=1


print("The number of passed students is : ",passed_student)

print("*************************")
#إضافة بونص
sto1=input("If you want to bouns click (ok): ")
if sto1=="ok":
  new=[]
for gra in range(5):
        grades[gra]+=5


print("the grades after bouns: ",grades)
print("*************************")     