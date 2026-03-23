sto1=input("Enter your email: ")
sto2=input("Enter your pass: ")

if sto1=="zaina" and sto2=="1234":
    print("succes login ^_^ ")
elif sto1=="zaina" or sto2=="1234":
    print("someone is wrong ! ")
    if sto1!="zaina":
        print("the email wrong!")
    elif sto2!="1234":
        print("the pass wrong!")
else:
    print("                  the pass and email wrong")
#***********************************
sto1=input("Are you have invitation? (yes/no) ")
sto2=input("Are you ready formal clothes? (yes/no) ")

if sto1=="yes" and sto2=="yes":
    print("             ##Welcome##")
elif sto1=="yes" or sto2=="yes":
    print("mmmmmm Ok you can let in :) ")

elif sto1=="no" and sto2=="no":
    print("SORRY !!! ")
else:
    print("!!!Invalid Input!!!")