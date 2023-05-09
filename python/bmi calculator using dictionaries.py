def calculate_bmi(weight, height):
    bmi = weight / (height ** 2)
    return bmi

# create a dictionary to store weight and height data
person = {'weight': 75, 'height': 1.8}

# calculate the BMI using the dictionary values
bmi = calculate_bmi(person['weight'], person['height'])

# print the result
print("BMI: {:.2f}".format(bmi))


#In this example, the calculate_bmi function takes the weight and height as arguments and calculates the BMI using the formula weight / (height ** 2). The function then returns the calculated BMI.

#Next, we create a dictionary called person that stores the weight and height values for a particular person. We use the calculate_bmi function to calculate the person's BMI based on the values in the dictionary, and then print the result using string formatting to display the BMI value with two decimal places. You can customize the weight and height values in the dictionary to calculate the BMI for different people.