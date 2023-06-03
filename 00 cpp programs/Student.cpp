#include<iostream>

using namespace std;

class Student{
    int rollno;
    string faculty;
    string name;

    public:
        void readData(){
                cout<<"Enter rollno: ";
                cin>>rollno;
                cout<<endl;
                cout<<"Enter faculty: ";
                cin>>faculty;
                cout<<endl;
                cout<<"Enter name: ";
                cin>>name;
                cout<<endl;
        }
        void displayData(){
                cout<<"Name:"<<name<<" Faculty: "<<faculty<<" rollno "<<rollno<<endl;
        }
};
int main(){
    Student s[50];
    for(int i=0;i<50;i++){
        s[i].readData();
    }
    for(int i=0;i<50;i++){
        s[i].displayData();
    }
    return 0;
}