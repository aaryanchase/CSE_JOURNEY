# f = open("demo.txt","r")
# data = f.read()
# print(data)
# print(type(data))
# f.close()


#Example of reading a file in python

# f=open("demo.txt","r")
# data=f.read(5)  # five characteers is only read and printed 
# print(data)
# f.close()


# f=open("demo.txt","r")
# line1 = f.readline()  # only first line is read and printed
# print(line1)

# line2=f.readline()  # only second line is read and printed
# print(line2)
# f.close()


# f=open("demo.txt","r")
# line1=f.readline()
# print(line1)

# line2=f.readline()
# print(line2)

# f.close()



#Example of writing a file in python.

# f=open("demo.txt","w")
# f.write("This is demo file for python file handling.\n" )  #overwriting (replaceing the previous one , means overwrite on them)

# f=open ("demo.txt","a")
# f.write("I'm understanding file handaling in python.")   # appending (adding extra on them )



# f=open("sample.txt","w")
# f.close()


# example r+ 

# f=open("sample.txt","r+")
# f.write("hey")
# print (f.read())
# f.close




