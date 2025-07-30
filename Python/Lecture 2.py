# String Declaration Variation 

"His brother's birthday" 
'His brother"s birthday'

# \n \t characters called Escape sequence charcter 


# Length

str = "Harsh Patel"
length = len(str)
print(str , "string is stored in str", "which has length" , length) 

ch = str[0]
print("Ch" , ch)

# Can access characters only can't modify means 
# str[0] = 'K'# is not possible

## Slicing 

print(str[1:4])
print(str[:2]) #[0:2]
print(str[6:]) #[6:len(str)]

# Negative index Slicing 

# [ A ,  p ,  p ,  l ,  e]
# [-5 , -4 , -3 , -2 , -1]

str = "Apple"

print(str[-3:-1]) #pl

## String functions 

# returns true if string end with substr 
str.endswith("el.")

# Capitalize 1st char 
str.capitalize()

# Replace all occurance of old with new
str.replace("old" , "new")

# returns the 1st index of the 1st occurance 
# if doesn't exist will get -1 
str.find("word")

# counts the occurance of the word
str.count("am")

#### All function make new string instead of changing the original one


#COnditional statements
# Space before the statement in if condition is called identation
age = 21 
if(age >= 18):
    print("Can vote")
elif(age <= 5):
    print("Listen baby shark")
else:
    print("Why are you ............")


