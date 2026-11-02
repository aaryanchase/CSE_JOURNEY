# Write a program that:
# 1. Prints the names of subjects in which marks are at least 75.
# 2. Counts how many subjects meet this condition.
# 3. Calculates the total marks across all subjects without using sum().
# Concepts: Dictionary iteration, conditions, counters, accumulators.

marks={
       "math":85,
        "python":93,
        "Java":89,
        "physics":90, 
        "computer":95,
        "Front-End":70,
        "Gen-Ai":88
}
# for mark in marks.items():
#     if(mark[1] >= 75):
#         print(mark[0])

count=0
total=0

for mark in marks.items():
    
    subject=mark[0]
    score=mark[1]

# Total marks calculation
    total+=score

  # Subjects with marks >= 75
    if (score>=75):
        print(subject)

        count+=1
print("Subjects with marks >= 75:",count)
print("Total marks : ",total)

        