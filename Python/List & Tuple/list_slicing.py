#similar to string slicing.
#starting index is included & ending index is not included.
#index starts from 0,1,2,3,.....

marks=[85,46,98,35,87,93,69,70,37]
print(marks[1:4]) 
print(marks[:5]) #same as marks[0:5]
print(marks[0:100])#is same as marks[0:len(marks)]
print(marks[-3:-1])
print(marks)

# Python slicing is forgiving. If the ending index is beyond the list, Python simply stops at the end of the list.
# Indexing asks for ONE specific element → invalid index = ERROR.
# Slicing asks for a RANGE → out-of-range boundaries are simply adjusted.