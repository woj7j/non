sto1=input("Would you like drink coffe or tea? ")

if sto1=="coffe":
    sto2=input("Would you like black or with sugar? ")
    if sto2=="black":
        print("**Black Coffe**")
    elif sto2=="with sugar":
        print("**Sugar Coffe**")
    else:
        print("            SORRY ^_^ ")
elif sto1=="tea":
    sto3=input("Would you like red or green tea? ")
    if sto3=="red":
        print("**Red Tea**")
    elif sto3=="green":
        print("**Green Tea**")
    else:
        print("            SORRY ^_^" )
else:
    print("Why you would't coffe or tea :( ??? ")
**********************************************
sto1=input("The Gender Of Student (Male/Female) : ")
age=input("The age : ")


if sto1=="Male":
    print("is boy")
    if age<="21":
        print("is young boy")
    else:
        print("the age above 21")
elif sto1=="Female":
    print("is girl")
    if age<="21":
        print("is young girl")
    else:
        print("the age above 21")
else:
    print("Wrong Input :(  !!!!!!!")