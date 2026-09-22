while True:
    num1=float(input ("Enter num1:"))
    operators=input("Enter Operators:")
    num2=float (input("Enter num2:"))
    if (operators=="+"):
        print(num1+num2)
    elif(operators=="-"):
        print(num1-num2)
    elif(operators=="*"):
        print(num1*num2)
    elif(operators=="/"):
        if(num2==0):
            print("Invalid")
        else:
            print(num1/num2)
    else:
        print("INVALID OPERATOR!!")
    print("CALCULATION DONE 😌")
    x= input("Do you want to calculate again? yes/no : ").lower()

    if (x=="no"):
        print("PROGRAM FINISHED...😁")
        break
