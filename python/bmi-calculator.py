def calculate_bmi(weight, height):
    bmi = weight / (height ** 2)
    return bmi

# get weight and height input from the user
weight = float(input("Enter your weight in kilograms: "))
height = float(input("Enter your height in meters: "))

# calculate the BMI using the input values
bmi = calculate_bmi(weight, height)

# print the result
print("Your BMI is: {:.2f}".format(bmi))

# interpret the BMI result
if bmi < 18.5:
    print("You are underweight.")
elif 18.5 <= bmi < 25:
    print("You are at a healthy weight.")
elif 25 <= bmi < 30:
    print("You are overweight.")
else:
	    print("You are obese.")
