# Fucntions 

def f_sum(a , b): #Parameters 
    return a + b 

print(f_sum(10 , 10)) #Function call 

# Prints on diff line 
print("Harsh")
print("Patel")

# Prints on same line 
print("Harsh" , end = " ")
print("Patel")
print()

# Seperator 

print("Harsh" , "Patel")
print("Harsh" , "Patel" , sep="-")


# Default parameter 

def f(a , b = 2): # b is default parameter
    return a*b 

print(f(5))


def show(n):
    if(n == 6):
        return
    print(n , end= " ")
    show(n+1)
    
def fact(n):
    if(n <= 1):
        return n 
    
    return n*fact(n-1)

print(fact(5))

def sum(n):
    if(n <= 1):
        return n
    
    return n + sum(n-1)

print(sum(5))
