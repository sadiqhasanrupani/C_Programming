from math import pi

r = float (input("\n Input the Radius of Circle : "))

Area_of_circle = pi * r ** 2 

#This is % (Modulo) string method 
print("\n The Area of Circle is : %.3f " %(Area_of_circle))

# This is .format() string method
print("\n The Area of Circle is : {0:5.3f} ." .format(Area_of_circle))

#And This is f-string method which has two types of float formatting
print(f"\n The Area of Circle is : {Area_of_circle:{0}.{5}}")

print(f"\n The Area of Circle is : {Area_of_circle :.3f}")
