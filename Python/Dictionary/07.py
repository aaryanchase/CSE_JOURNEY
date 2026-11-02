# Q4 — Mixed Revision: Student Result Analysis
# Given:

# students = {
#     "Aman": [78, 85, 90],
#     "Riya": [92, 88, 95],
#     "Rahul": [45, 60, 55],
#     "Neha": [80, 75, 85]
# }


# Each student's list contains marks in three subjects.
# Write a program that:
# 1. Calculates each student's total marks.
# 2. Calculates each student's average marks.
# 3. Stores the totals in a new dictionary.
# 4. Prints the names of students whose average is at least 80.
# 5. Counts how many students passed this average threshold.
# You may use sum() if you've already learned it. Otherwise, calculate the totals using a loop.
# Concepts: Nested data structures, lists, dictionaries, loops, conditions, arithmetic and counters.

'''students = {
    "Aman": [78, 85, 90],
    "Riya": [92, 88, 95],
    "Rahul": [45, 60, 55],
    "Neha": [80, 75, 85]
}

total = {}
count = 0

for student in students.items():

    name = student[0]
    marks = student[1]
    total_marks = marks[0] + marks[1] + marks [2]
    average_marks = total_marks / 3

    total[name] = total_marks

    

    print("Student:",name)
    print("Marks:",marks)
    print("Total Marks is : ",total_marks)
    print("Average Marsk is : ",round(average_marks,2))
    # print(total)

    if average_marks >= 80:
            count +=1
            print(name,"Qualified!")
            
    

print("Total Marks Dictionary:", total)
print("Number of students with average >= 80:", count)
'''
 
# ANSI color codes
RESET = "\033[0m"
BOLD = "\033[1m"
RED = "\033[91m"
GREEN = "\033[92m"
CYAN = "\033[96m"
YELLOW = "\033[93m"
BLUE = "\033[94m"

students = {
    "Aman": [78, 85, 90],
    "Riya": [92, 88, 95],
    "Rahul": [45, 60, 55],
    "Neha": [80, 75, 85]
}

total = {}
count = 0

# Header
print(CYAN + BOLD)
print("=" * 58)
print("           STUDENT RESULT ANALYSIS")
print("=" * 58)
print(RESET)

print(f"{'STUDENT':<12}{'TOTAL':>8}{'AVERAGE':>12}{'RESULT':>14}")
print("-" * 58)

for student in students.items():
    name = student[0]
    marks = student[1]

    total_marks = marks[0] + marks[1] + marks[2]
    average_marks = total_marks / 3

    total[name] = total_marks

    if average_marks >= 80:
        result = GREEN + BOLD + "PASS" + RESET
        count += 1
    else:
        result = RED + BOLD + "FAIL" + RESET

    print(
        f"{name:<12}"
        f"{total_marks:>8}"
        f"{average_marks:>12.2f}"
        f"{result:>23}"
    )

print("-" * 58)

# Summary
print(YELLOW + BOLD + "\nRESULT SUMMARY" + RESET)
print(BLUE + "-" * 30 + RESET)

print(f"Total Students     : {len(students)}")
print(f"Qualified Students : {GREEN}{count}{RESET}")
print(f"Not Qualified      : {RED}{len(students) - count}{RESET}")

print("\n" + CYAN + BOLD + "TOTAL MARKS DICTIONARY" + RESET)
print(total)

print(CYAN + "=" * 58 + RESET)




# students = {
#     "Aman": [78, 85, 90],
#     "Riya": [92, 88, 95],
#     "Rahul": [45, 60, 55],
#     "Neha": [80, 75, 85]
# }

# total = {}
# count = 0
# class_total = 0

# # Dashboard Header
# print("\n" + "=" * 60)
# print("              STUDENT PERFORMANCE DASHBOARD")
# print("=" * 60)

# print("\n📊 STUDENT REPORT CARDS")
# print("-" * 60)

# for student in students.items():
#     name = student[0]
#     marks = student[1]

#     total_marks = sum(marks)
#     average_marks = total_marks / len(marks)

#     total[name] = total_marks
#     class_total += total_marks

#     if average_marks >= 80:
#         result = "PASS"
#         count += 1
#     else:
#         result = "FAIL"

#     print(f"\n  Student Name : {name}")
#     print(f"  Subject Marks: {marks}")
#     print(f"  Total Marks  : {total_marks}")
#     print(f"  Average      : {average_marks:.2f}")
#     print(f"  Result       : {result}")
#     print("  " + "-" * 35)

# # Dashboard Statistics
# total_students = len(students)
# not_qualified = total_students - count
# class_average = class_total / (total_students * 3)

# print("\n" + "=" * 60)
# print("                  OVERALL SUMMARY")
# print("=" * 60)

# print(f"  Total Students       : {total_students}")
# print(f"  Qualified Students   : {count}")
# print(f"  Not Qualified        : {not_qualified}")
# print(f"  Overall Class Average: {class_average:.2f} / 100")

# print("\n" + "=" * 60)
# print("                 TOTAL MARKS RECORD")
# print("=" * 60)

# for name, marks in total.items():
#     print(f"  {name:<12} : {marks:>3} / 300")

# print("\n" + "=" * 60)
# print("              END OF PERFORMANCE REPORT")
# print("=" * 60 + "\n")
