#printing a name by using f string method .
#their are three types of sting Formatting methods
#first is module (%) sting method.

print("\n My name is %s. "%"Sadiqhasan Rupani")

#we can also use tuples in modulo string method.
print("\n My name is %s and my Age is %s. " %("Sadiqhasan Rupani" , "18"))

#we can also pass the Variable name.
x , y = ("Sadiqhasn Rupani", '18')
print(" \n My name is %s and my Age is %s. " %(x,y))


# Secod is .format() method.
print(" \n My Name is {} And My Age is {}. ".format("Sadiqhasan Rupani","18"))

#we can also give a Variable Name also . in .format() method.

print(" \n And I'm studying in {College}. Class {c}. ".format(College = "VPIMSR", c = "BCA - I"))
 

# And finally f string method , this is a new method in Python 3.6

name =  "Sadiqhasan Rupani" 
age = "18"
college = "Vasant dada patil institute of Management and Research "
clss = "BCA-I"

print(f"\n My Name is {name} and My Age is {age} \n\n And I'm Studying in : {college} \n\n And my Class is {clss}")
