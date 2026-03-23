num1=float(input('Enter the first number: '))
ober=input("Select the available oberation (+,-,*,/,%): ")
num2=float(input('Enter the second number: '))

if ober=="+":
    result=num1+num2
    print(num1," + ",num2," = ",result)
elif ober=="-":
    result=num1-num2
    print(num1," - ",num2," = ",result)
elif ober=="*":
    result=num1-num2
    print(num1," * ",num2," = ",result)    
elif ober=="/":
    if num2!=0:
        result=num1-num2
        print(num1," / ",num2," = ",result)
    else:
        print("Can't Division!")
elif ober=="%":
    result=num1-num2
    print(num1," % ",num2," = ",result)    
else:
    print("Invalid Oberation: ",ober)