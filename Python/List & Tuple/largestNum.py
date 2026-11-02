# Find the largest number

numbers = [23, 67, 12, 89, 34, 56]

# Find and print the largest number.
# Try using Python's built-in function first. Then think about how you could find it without that function.

print(max(numbers))

numbers = [23, 67, 12, 89, 34, 56]

largest = numbers[0]        # Assume the first element is the largest number

for num in numbers:     # Iterate through each number in the list
    if num > largest:
        largest = num

print(largest)