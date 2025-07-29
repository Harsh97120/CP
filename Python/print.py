# First print

print("Hello World")

# Same line print with space witihn it.

print("Hello" , "world")

# data types 
# No need to explicitly declare data types 

name = "Harsh" 
age = 21 
print(name)

# Can print types of the variable 

print(type(name))

# For boolean F and T are capital

t1 = True 
t2 = False 

""" Multi line comment through triple quote """

# Sum 

a = 5 
b = 2 

print(a + b)
print(a - b)
print(a*b)
print(a/b)
print(a%b)
print(a**b)
# print(a == b)
# print(a != b)
# print(a >= b)
# print(a <= b)
# print(a > b)
# print(a < b)

num = 10 
# num = num + 10 
num += 10 

# Logical operator 

print(not False)
print(not True)

print(t1 and t2)


# Type conversion 

c = 4 
d = 1.0 

print(c+d)

# Type casting 

e = int("2") #Valid
# e = int("Freak") #Invalid
print(type(e))
print(e)

# Convert to string 

f = 3.14 
f = str(f)

print(type(f))
print(f)

# Input from user 

name1 = input("Enter your age:")
# name1 is always be string so type cast it 
age = int(input("Enter your age:"))
print(type(name1))
print(type(age))