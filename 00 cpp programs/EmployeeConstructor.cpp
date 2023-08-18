#include<iostream>

using namespace std;
class Employee{
    int code;
    string name;
    string address;
    float salary;

    public:
        Employee(int code, string name, string address, float salary){
            this->code = code;
            this->name = name;
            this->address = address;
            this->salary = salary;
        }
        Employee(Employee&e){
            this->code = e.code;
            this->name = e.name;
            this->address = e.address;
            this->salary = e.salary;
        }
        void display(){
            cout<<"Employee Information: "<<endl;
            cout<<"Code: "<<this->code<<endl;
            cout<<"Name: "<<this->name<<endl;
            cout<<"Address: "<<this->address<<endl;
            cout<<"Salary: "<<this->salary<<endl;
        }
};
int main(){
    Employee E(23,"Hari","palpa",345.6);
    Employee J(E);
    J.display();

    return 0;
}