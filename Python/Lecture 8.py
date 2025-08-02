# OOPS in Python 

class Student:
    name = "Harsh Patel" #Default name 
    
    def __init__(self , full_name):
        self.name = full_name 
    
    @staticmethod #Make method static <-- this one is called decorator 
    def print():
        print("Hello")
    
    
    
s1 = Student("t")
print(s1.name)
    
# Constructor 
# Self == this pointer 