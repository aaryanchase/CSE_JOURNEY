# Q3 — Logic Building: Frequency Counter
# Given:
# numbers = [10, 20, 10, 30, 20, 10, 40, 30, 20, 10]
# Create a dictionary that counts how many times each number appears.
# Expected output:
# {    10: 4,    20: 3,    30: 2,    40: 1}
# Rules:
# - Use a for loop.
# - Don't use count().



# i am not being able to solve it


numbers = [10, 20, 10, 30, 20, 10, 40, 30, 20, 10]

frequency = {}

for num in numbers:
    if num in frequency:
        frequency[num] += 1

    else:
        frequency[num] = 1

print(frequency)