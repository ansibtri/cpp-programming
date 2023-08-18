#include<iostream>

using namespace std;

class University{
    string name;
    string location;

    public: University(string name, string location){
        this->name = name;
        this->location = location;
    }
    void get(){
        cout<<"University Information: "<<endl;
        cout<<"Name: "<<this->name<<endl;
        cout<<"Location: "<<this->location<<endl;
    }
};
class AffiliatedCollege:virtual public University{
    string collegeName;
    string address;
    int noOfPrograms;
    public:
        AffiliatedCollege(string collegeName, string address,int noOfPrograms,string name,string location):University(name, location){
            this->collegeName = collegeName;
            this->address = address;
            this->noOfPrograms = noOfPrograms;
        }
        void get(){
            cout<<"Affiliated College Details:"<<endl;
            cout<<"College Name: "<<this->collegeName<<endl;
            cout<<"Address: "<<this->address<<endl;
            cout<<"No of Programs: "<<this->noOfPrograms<<endl;
        }
};
class ConstituentCollege:virtual public University{
    string school;
    string dean;
    string nameOfProgram;

    public: ConstituentCollege(string school, string dean, string nameOfProgram,string name,string location):University(name,location){
        this->school = school;
        this->dean = dean;
        this->nameOfProgram = nameOfProgram;
    }
    void get(){
        cout<<"Constituent College: "<<endl;
        cout<<"School: "<<this->school<<endl;
        cout<<"Dean: "<<this->dean<<endl;
        cout<<"Name of Program: "<<this->nameOfProgram<<endl;
    }
};
class Student: public AffiliatedCollege, public ConstituentCollege{
    string studentName;
    string program;
    int enrolledYear;
    public: 
    Student(string studentName, string program, int enrolledYear, string collegeName, string address,int noOfPrograms,string name,string location,string school, string dean, string nameOfProgram):AffiliatedCollege(collegeName,address,noOfPrograms,name,location),ConstituentCollege(school,dean,nameOfProgram,name,location),University(name,location){
        this->studentName = studentName;
        this->program = program;
        this->enrolledYear = enrolledYear;
    }
    void get(){
        University::get();
        AffiliatedCollege::get();
        ConstituentCollege::get();
        cout<<"Student Detials: "<<endl;
        cout<<"Student Name: "<<this->studentName<<endl;
        cout<<"Program: "<<this->program<<endl;
        cout<<"Enrolled Year: "<<this->enrolledYear<<endl;
    }
};
int main(){
    Student s("Ram","IT",2023,"EEC","Sanepa",3,"Pokhara University","Kaski","SOE","Hari","Bachelor");
    s.get();
    return 0;
}