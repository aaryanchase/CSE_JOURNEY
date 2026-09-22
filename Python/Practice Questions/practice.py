# a= "hello"
# b="world"
# c=a+b
# print (c)

# a= "aaryan_shah"
# b=len(a)
# print(b)

# a="aaryan_shah"
# print(a[10])

# str= "aaryanshah"
# print (str[1:5])
# print(str[:4])
# print(str[0:])
# print(str[-3:-1])
# print(str[-10:-1])

# str= "i am a coder"

# a= str.replace("coder", "aaryan")
# b=str.capitalize()
# c= str.count ("a")
# d=str.find("coder")

# print(d)
# print (a)
# print (b)
# print(c)

#wap to input user's first name and print its length.

# first_name= input("Enter first name:")
# print(len(first_name), "is the length of your name.")

#wap to find the occurance of $ symbols in a string.

# sentense = " hey this is $ aaryan. i have just $ got admission $ in shooloni university $. I'am happy here as $ my friends are good $."
# letter =input("Enter the the letter to count of its occurance : ")
# count=sentense.lower().count (letter.lower()   )
# if count<=0:
#     print("This letter alphabet or letter is not available in this sentense.")
# else:
#     print("The letter or alphabet is occured",count,"times.")

# CONDITIONAL STATEMTNT PRACTICES :

# name= "aaryan"
# x = input("Enter letter:")
# y=name.upper()
# z=x.upper()
# count= y.count(z)
# if count<=0:
#     print("letter not available.")
# else:
#     print("letter occured",count,"times." )
# print("PROGRAM FINISHED...")        

# while True:
#     light = input("Enter traffic light:").lower()
#     if(light=="red" or light=="yellow" or light=="green"):
#         speed=int (input("Enter Vehicles Speed:"))
#     # light=light_name.lower() 
#     if(light=="red"):
#         if(speed>0):
#             print("🛑 STOP YOUR VEHICLE IMMEDIATELEY !!! ")
#         else:
#             print("Vehicle is already stopped.")
#         break

#     elif(light=="green"):
#         print("go go go ...")
#         break

#     elif(light=="yellow"):
#         if(speed>30):
#             print("🟡 SLOW DOWN YOUR VEHICLE 🚗")
#         else:
#             print("Be ready to go...")
#         break

#     else:
#         print("🛑 INVALID TRAFFIC LILGHT ! , Enter Red , Green , Yellow only.")

# print ("PROGRAM FINISHED...😁")


# MAKING CALCULATOR 
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

