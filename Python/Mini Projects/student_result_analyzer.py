name = input("Enter name: ")

marks = []

# Take marks for 4 subjects
for i in range(4):
    mark = float(input("Enter Marks: "))
    marks.append(mark)

total_marks = 0

# Calculate total marks
for mark in marks:
    total_marks = total_marks + mark

total_percentage = (total_marks / 400) * 100

# Find highest marks
highest = mark

for mark in marks:
    if mark > highest:
        highest = mark

# Find lowest marks
lowest = mark

for mark in marks:
    if mark < lowest:
        lowest = mark

print("-----RESULT-----")
print("Name:", name)
print("Total Marks:", total_marks)
print("Total Percentage:", total_percentage)
print("Highest Marks:", highest)
print("Lowest Marks:", lowest)

if total_percentage < 50:
    print("UNSUCCESSFUL")
else:
    print("SUCCESSFUL")
