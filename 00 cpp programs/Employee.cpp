#include<iostream>

using namespace std;

class Employee {
    int emp_id; // Employee ID
    string emp_name; // Employee Name
    string address; // Employee Address
    int salary; // Employee Salary
    string post; // Employee Post

    public:
        void initialize(){
            cout<<endl<<"-----------------------------------------------------------------------------------------"<<endl;
            cout<<"Enter employee information: "<<endl;
            cout<<"Employee ID: ";cin>>emp_id;
            cout<<"Name: ";cin>>emp_name;
            cout<<"Address: ";cin>>address;
            cout<<"Salary: ";cin>>salary;
            cout<<"Post: ";cin>>post;
            cout<<"-----------------------------------------------------------------------------------------"<<endl;
        }
        void display();
        void display(int wages){
            if(salary>wages){
                display();
            }
        }
};
void Employee::display(){
    cout<<endl<<"-----------------------------------------------------------------------------------------"<<endl;
    cout<<"Employee Information: "<<endl;
    cout<<"Employee ID: "<<emp_id<<endl;
    cout<<"Name: "<<emp_name<<endl;
    cout<<"Address: "<<address<<endl;
    cout<<"Salary: "<<salary<<endl;
    cout<<"Post: "<<post<<endl;
    cout<<"-----------------------------------------------------------------------------------------"<<endl;
}
int main(){
    Employee e[50];
    for(int i=0;i<50;i++){
        e[i].initialize();
    }
    for(int i=0;i<50;i++){
        e[i].display(55000);
    }
    return 0;
}