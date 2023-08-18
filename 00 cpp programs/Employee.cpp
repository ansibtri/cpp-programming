#include<iostream>
#include<cstring>
using namespace std;
class Person{
    string name;
    string address;
    int age;

    public: Person(string name,string address,int age){
        this->name=name;
        this->age = age;
        this->address=address;
    }
    void get(){
        cout<<"Person Details: "<<endl;
        cout<<"Name: "<<this->name<<endl;
        cout<<"Age: "<<this->age<<endl;
        cout<<"Address: "<<this->address<<endl;
    }
};
class JobDetails{
    string job_designation;
    string job_department;

    public: JobDetails(string job_designation, string job_department){
        this->job_designation=job_designation;
        this->job_department=job_department;
    }
    void get(){
        cout<<"Job Details: "<<endl;
        cout<<"Job Designation: "<<this->job_designation<<endl;
        cout<<"Job Department: "<<this->job_department<<endl;
    }
};
class Employee: public Person, public JobDetails{
    int emp_id;
    public:
        Employee(int emp_id, string name,string address,int age,string job_designation, string job_department):Person(name,address,age),JobDetails(job_designation,job_department){
            this->emp_id = emp_id;
        }
        void get(){
            Person::get();
            JobDetails::get();
            cout<<"Employee ID:"<<this->emp_id<<endl;
        }
};
int main(){
    Employee E(23,"hari","nepal",23,"jr.developer","it");
    E.get();
    return 0;
}