
#include<iostream>

using namespace std;

class Student{
    char name[20];
    int roll;
    float m1,m2,m3;
    
    public:
        void set(){
            cout<<"Enter name: ";cin>>name;
            cout<<"Roll: ";cin>>roll;
            cout<<"Enter marks of three subjects: "; cin>>m1>>m2>>m3;
        }
        void get(){
            cout<<"Name: "<<name<<endl;
            cout<<"Roll no: "<<roll<<endl;
            if(m1>=45 && m2>= 45 && m3>= 45){
                cout<<"Result = Pass"<<endl;
            }else{
                cout<<"Result = Fail"<<endl;
            }
        }
};
int main(){
    int n,i;
    Student *ptr;
    cout<<"Enter no of student: "<<endl;
    cin>>n;
    ptr =new Student[n];
    for(i=0;i<n;i++){
        cout<<"Enter the informatin of student"<<i+1<<endl;
        ptr[i].set();
    }
    for(i=0;i<n;i++){
        cout<<"Information of student: "<<i+1<<endl;
        ptr[i].get();
    }
    delete []ptr;
    return 0;
}