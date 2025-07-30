# Lists in python

# In python we can store values with different types

marks = [94.4 , 87.5 , 95.2 , 66.4 , 45.1]
print(marks)
print(type(marks))

student = ["Harsh" , 99.7 , 21 , "Dehli"]
print(student)

## Immutable --> things that can't change 

# Strings are inmmutable 
# Lists are mutable 

print(student[0])
student[0] = "Temp"
print(student)


# List slicing
# strudent[st_index:end_index+1] 

print(student[1:4])
print(student[:2]) #[0:2]
print(student[6:]) #[6:len(str)]


# List methods 
list = [2,1,3]

# Append element
list.append(4)

# Sort the list in ascending 
list.sort()

# Sort the list in descending 
list.sort(reverse=True)

# Reverse the list 
list.reverse()

# Insert at the index 
el = 5
ind = 1
list.insert(ind , el)

# Remove the first occurance of x
x = 1
list.remove(x)


# Remove the element at index idx
idx = 1
list.pop(idx)

# COpy the list 
list2 = list.copy()


### Tuples in python 

# Immutable 
tup = (2,1,3,1)
print(type(tup))

# Data fetching 
print(tup[0])

# Assignment is not allowed
# tup[0] = 5 #error

tup = (1) #This one is integer 
print(type(tup))

tup = (1,) #This one is tuple 
print(type(tup))

# Slicing 
# Same as above

## Tuple methods 
tup = (2,1,3,1)

# return the idex of the first occuraance of el
tup.index(el)

# counts total occurrences of el
tup.count(el)

# Can compare array and tuple with == 