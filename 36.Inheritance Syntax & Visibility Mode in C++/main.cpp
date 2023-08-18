#include <iostream>

using namespace std;

// Base Class
class Employee
{

public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee(){}
};

// Creating a Programmer class derived from Employee Base Class
class Programmer : Employee
{
public:
    int languageCode = 9;
    Programmer(int inpId){
        id = inpId;
    }
    void getData(){
        cout<<id;
    }
};
int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout<<harry.id<<endl;
    cout<<skillF.languageCode<<endl;
    skillF.getData();
    return 0;
}

// Derived Class syntax
// class {{derived-class-name}} : {{visibility-mode}} {{base-class-name }}
// {
//     //members
// }

// Creating a programmer class derived from Employee base class
// ==> Default visibility mode is private
// ==> Public Visibility Mode: Public members of the base class becomes Public members of the derived class
// ==> Private Visibility Mode: Public members of the base class becomes Private members of the derived class
// ==> Private members are never inherited