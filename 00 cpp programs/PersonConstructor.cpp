#include <iostream>

using namespace std;

class Person
{
    int age;
    string name;
    string address;
    long citizenshipNo; // citizenship number

public:
    Person(int age, string name, string address, long citizenshipNo)
    {
        this->age = age;
        this->name = name;
        this->address = address;
        this->citizenshipNo = citizenshipNo;
    }
    void display()
    {
        cout << "Person Information: " << endl;
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
        cout << "Address: " << this->address << endl;
        cout << "Citizenship Number: " << this->citizenshipNo << endl;
    }
};

int main()
{
    int age;
    long citizenshipNo = 0;
    string name, address;
    cout << "Enter Information: " << endl;
    cout << "Name:";
    cin >> name;
    cout << "Age: ";
    cin >> age;
    cout << "Address: ";
    cin >> address;
    if (age > 16)
    {
        cout << "Citizenship No: ";
        cin >> citizenshipNo;
    }
    Person P(age, name, address, citizenshipNo);
    P.display();
    return 0;
}