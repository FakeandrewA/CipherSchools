#include <iostream>
#include <tuple>
#include <string>

class Person {
private:
    std::string firstName;
    std::string lastName;
    int age;

public:
    // Constructor
    Person(const std::string& fName, const std::string& lName, int age)
        : firstName(fName), lastName(lName), age(age) {}

    // Method to return full name
    std::string getFullName() const {
        return firstName + " " + lastName;
    }

    // Method to return details as a tuple
    std::tuple<std::string, std::string, int> getDetails() const {
        return std::make_tuple(firstName, lastName, age);
    }
};

int main() {
    // Create an instance of Person
    Person person("John", "Doe", 25);

    // Print full name
    std::cout << "Full Name: " << person.getFullName() << std::endl;

    // Use structured bindings to unpack the tuple returned by getDetails()
    auto [first, last, age] = person.getDetails();

    // Print details
    std::cout << "First Name: " << first << std::endl;
    std::cout << "Last Name: " << last << std::endl;
    std::cout << "Age: " << age << std::endl;

    return 0;
}
