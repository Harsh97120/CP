# File i/o 
path = "C:\\Classroom\\CP\\Python\\demo.txt"

# demo.txt 

# Python Lecture 7 practice.
# FIle I/O 

# Open file 
f = open(path , "r")
data = f.read() 
print(data)
f.close() 

# Modes 

# r - 'read'
# w - 'write'
# x - 'create a new file and open it to write'
# a - 'create a new file and open it to write & if exist append'
# b - 'binary mode'
# t - 'text' (default)
# + - 'open disk file for (writing and updating)'

# If we want to read firt n letters 
n = 5
f = open(path , "r")
data = f.read(n) 
print(data)
f.close() 

# Read line by line 

f = open(path , "r")
line1 = f.readline() 
print(line1)
f.close() 

# Writing in file 

f = open(path , "w")
f.write("This is new line")
f.close()

# Appending in file 

f = open(path , "a")
f.write("\nThis is new line")
f.close()

# Different modes 

# r+ - files get overwrited
# w+ - files get trucated can't read thing 
# a+ - can't read anything bcz point is at the end and can append

# with syntax 

with open(path , "r") as f:
    data = f.read()
    
# Deletion 

# import os 
# os.remove(path) 
word = "Harsh"
data1 = "Harsh Patel"
if word in data1 :
    print("Yes")
    
    
# Split
nums = "1,2,3,4"
t = nums.split(",")
print(t)