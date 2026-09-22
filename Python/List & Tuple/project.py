name= input("Enter your name:")
marks1=float (input ("Enter marks of Accountiing"))
marks2=float(input("Enter marks for Business Law"))
marks3=float(input("Enter marks for Mathematics "))
marks4=float(input ("Enter marks for Business Economics"))
marks = [marks1,marks2,marks3, marks4]
Total_Marks= marks1+marks2+marks3+marks4
Total_Percentage= (Total_Marks/400)*100
highest=marks1
if marks2>highest:
    highest=marks2
if marks3>highest:
    highest=marks3
if marks4>highest:
    highest=marks4

lowest=marks1
if marks2<lowest:
    lowest=marks2
if marks3<lowest:
    lowest=marks3
if marks4<lowest:
    lowest=marks4

print("\n ----- R E S U L T -----")
print("Name",name)
print ("Marks", marks)
print("Total Marks", Total_Marks)
print("Total Percentage", Total_Percentage)
print("Highest Marks ", highest)
print("Lowest Marks ", lowest)

if Total_Percentage<50:
    print("UNSUCCESSFUL")
else:
    print("SUCCESSFUL")
print("Congratulations 🥳🙌❤️, Now Nikhil is a CA Intermediate Student !!! 😭")