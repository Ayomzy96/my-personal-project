def add_contact(contacts, name, phone_number):
    contacts[name] = phone_number
    print("Contact '{}' added successfully.".format(name))


def search_contact(contacts, name):
    if name in contacts:
        phone_number = contacts[name]
        print("Contact found:")
        print("Name: {}\nPhone number: {}".format(name, phone_number))
    else:
        print("Contact '{}' not found.".format(name))


def delete_contact(contacts, name):
    if name in contacts:
        del contacts[name]
        print("Contact '{}' deleted successfully.".format(name))
    else:
        print("Contact '{}' not found.".format(name))


def print_contacts(contacts):
    if not contacts:
        print("No contacts found.")
    else:
        print("Contact List:")
        for name, phone_number in contacts.items():
            print("Name: {}\nPhone number: {}\n".format(name, phone_number))


def contact_book():
    contacts = {}
    while True:
        print("\n--- Contact Book ---")
        print("1. Add contact")
        print("2. Search contact")
        print("3. Delete contact")
        print("4. Print contacts")
        print("5. Exit")

        choice = input("Enter your choice (1-5): ")

        if choice == "1":
            name = input("Enter contact name: ")
            phone_number = input("Enter contact phone number: ")
            add_contact(contacts, name, phone_number)

        elif choice == "2":
            name = input("Enter contact name to search: ")
            search_contact(contacts, name)

        elif choice == "3":
            name = input("Enter contact name to delete: ")
            delete_contact(contacts, name)

        elif choice == "4":
            print_contacts(contacts)

        elif choice == "5":
            print("Exiting...")
            break

        else:
            print("Invalid choice. Please try again.")


contact_book()
