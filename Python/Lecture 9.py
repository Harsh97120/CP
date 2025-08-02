# OOPS 2

class Student:
    def __init__(self , name):
        self.name = name 
        
s1 = Student("Harsh")

# Deleting an object 

del s1 

# TO make data or memeber functions private put __ before variable name.

class t:
    def __init__(self , name):
        self.__name = name # __name is private now 
        
# Inheritance 

class Car:
    
    def __init__ (self , type):
        self.type = type 
    
    @staticmethod 
    def start():
        print("Car started... ")
        
    @staticmethod
    def stop():
        print("Car stopped... ")
        
class ToyotaCar(Car):
    
    def __init__(self , car_name , type):
        self.name = car_name 
        super().__init__(type) #Calling variable of super class 
        
Car1 = ToyotaCar("Mine" , "ug")
Car1.start()

# Multiple Inheritance 

class A:
    pass 

class B:
    pass 

class C(A , B):
    pass 


# Super method 
# Access method of the parent class 
# Line no 38 

# Class Method 

class Person:
    
    name = "anonymous"
    
    # def ChangeName(self , name):
    #     self.name = name 
    #     Person.name = name #1
    #     self.__class__.name = name #2
        
    # 3 
    @classmethod
    def ChangeName(cls , name):
        cls.name = name 
        
    
    

p1 = Person()
p1.ChangeName("Harsh")
print(p1.name)
print(Person.name) #To change person name from anonymous

# 3 Types of method 

# Static Method 
# Class Method 
#     First params : cls 
# Object Method
#     First params : self 


# Property Decorator 

class Student:
    
    def __init__(self, phy , chem , mat):
        self.phy = phy 
        self.chem = chem 
        self.math = mat
        
    @property # Return value become a attribute 
    def percentage(self):
        return str((self.phy + self.chem + self.math)/3) + "%"
        
stu1 = Student(98 ,97 , 99)
print(stu1.percentage)

# More Decorator 
# 1.) getter 
# 2.) setter 


# PolyMorphism 

class Complex: 
    def __init__(self ,real , img):
        self.real = real 
        self.img = img 
        
    def showNumber(self):
        print(self.real ,"i +" , self.img , "j")
        
        
    def __add__(self , num2):
        newReal = self.real + num2.real 
        newImg = self.img + num2.img 
        
        return Complex(newReal , newImg)
    
    def __sub__(self , num2):
        newReal = self.real - num2.real 
        newImg = self.img - num2.img 
        
        return Complex(newReal , newImg)
        
num1 = Complex(1 , 3)
num1.showNumber()

num2 = Complex(4 , 6)
num2.showNumber()

# num3 = num1.add(num2)

num3 = num1 + num2 
num3.showNumber()

# More Operator overloading functions to lookout 
# https://docs.python.org/3/reference/datamodel.html#emulating-numeric-types