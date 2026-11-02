numbers = (12, 45, 7, 89, 34, 67, 23)
largest=12
for num in numbers:
    if(num>largest):
        largest=num

second_largest=0        
for num in numbers:
    if(num<largest):
        if(num>second_largest):
            second_largest=num
print(second_largest)            
