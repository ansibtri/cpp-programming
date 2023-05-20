#include <iostream>
#include <string>

class Person {
private:
    std::string name;
public:
    Person(const std::string& personName) : name(personName) {
        std::cout << "Person created with name: " << name << std::endl;
    }

    ~Person() {
        std::cout << "Person destroyed with name: " << name << std::endl;
    }
};

int main() {
    // Creating a new instance of the Person class
    Person* person = new Person("John Doe");

    // Perform operations with the person object

    // Deallocate the memory when done using the object
    delete person;

    return 0;
}
