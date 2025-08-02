# Dictionary like Unordered_map

info = {
    "key" : "val" ,
    1 : 2 , 
}

# Nested DIctionary

student = {
    "name" : "Harsh" , 
    "sub" : {
        "Phy" : 78 ,
        "Chem" : 78 , 
        "Maths" : 100 
    }
}

# Print all keys in dictionary

print(info.keys())

# Make a list of keys 

print(list(info.keys()))

# Print all values 

print(info.values())

# Print all key - value pairs 

print(info.items())


# Get value of the key 

print(info["key"]) # Gives error if key doesn't exist
print(info.get("key")) # Gives none for the same

# Update the value 

info.update({"city":"valsad"})


# Unordered_SET 
# Remove duplicate 

nums = {1,2,2,2}
print(nums)

# Empty set 

collection = set()

# Set methods

el = 5 

collection.add(el)
collection.add((1,2,3))
collection.remove(el)

# Empty the set 

collection.clear()
collection.add(el)

# Remove random value 

collection.pop()

# Unioun 

set1 = {1,2,3}
set2 = {1,2,4}

print(set1.union(set2))

# Intersection

print(set1.intersection(set2))