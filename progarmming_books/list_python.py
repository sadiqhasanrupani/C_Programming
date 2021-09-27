my_list = ['one','two','three',4,5]

print(f"\n Grab index 1 and everthing past it : {my_list[1:]}")

print( f"\n Grab everthing up to index 3 = {my_list[:3]}")

print( "\n Grab everthing up to index 4 = {}".format(my_list[:-1]))

# if you want to and a temporary item in your list then...

print(f"\n my Temporary list is := {my_list + ['Temporary list']} ")    

#let's make three list 
list_1 = [1,2,4]

list_2 = [3,5,6]

list_3 = [7,8,9]

print(f" The matrix of the nested list is {[ list_1 , list_2 , list_3]}")
