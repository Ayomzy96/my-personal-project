#!/usr/bin/python3
# program for displaying your personal information using old style
name=input("What is your name: ")
age= int (input ("How old are you: "))
print("my name is %s, i am %d years old" %(name,age))
print()
#program for displaying your personal information using new style

#prints all output in string format
print("my name is {}, i am {} years old".format (name,age))
print()
print("my name is {:s}, i am {:d} years old".format (name,age))
print()
#all keyword argument represented in index
print("my name is {1}, i am {0} years old".format (age,name))
print()
print("my name is {my_name}, i am {my_age} years old".format (my_age=age,my_name=name))
print()
#f-string formatting style which is usually more effective
print(f"my name is {name:s}, i am {age:d} years old")