# Defining a function for an age calculator
def age_calc():
    name = input("Please enter your name: ")
    year_of_birth = int(input("What's your year of birth: "))
    current_year = 2023
    age = current_year - year_of_birth
    print("Dear {}, you are {} years old".format(name, age))

# Calling the function
age_calc()
