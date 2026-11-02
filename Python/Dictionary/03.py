# dictionary methods

dict={
    "name":"Aaryan",
    "marks":[98,78,96],
    "cgpa":9.8
}
print(dict.keys())
print(dict.values())
print(dict.items())
print(dict.get("marks"))
print(dict["marks"])
# Updates the 'marks' key with a new list
dict.update({"marks": [100, 95, 99]})
print(dict["marks"])