def mad_libs():
    noun = input("Enter a noun: ")
    adjective = input("Enter an adjective: ")
    verb = input("Enter a verb: ")
    print("The {} {} {} over the lazy dog.".format(adjective, noun, verb))

mad_libs()

#When you run this program, it prompts the user to enter a noun, an adjective,
# and a verb. It then uses these words to create a sentence in the form of a
# Mad Lib, which it prints to the console.