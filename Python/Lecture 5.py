
i = 1 

while i <= 5 : 
    if(i == 3):
        break 

    print(i)
    i += 1 
    
list = [1,2,3,4]

for el in list:
    print(el , end = " ")
    
else: 
    print("End") # This things executes when whole loops completes 
    
# Range (st , end , steps) 
    #  Prints till end - 1 doesnt include end 

for el in range(5):
    print(el  , end = " ")
else :
    print("\n")
    
for el in range(2,5):
    print(el  , end = " ")
else :
    print("\n")
    
for el in range(1,10 , 2):
    print(el  , end = " ")
else :
    print("\n")
    

#  Doing nothing 
for it in range(5):
    pass 