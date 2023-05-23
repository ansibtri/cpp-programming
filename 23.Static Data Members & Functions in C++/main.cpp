#include<iostream>

using namespace std;

class Employee {

    int id;
    static int count; // we can't assign the value of static member inside a class
    public:
        void setData(){
            cout<<"Enter the id: ";
            cin>>id;
            count++;
            cout<<endl;
        }
        void getData(void){
            cout<<"The id of this employee is "<<id<<" and this is emmployee number count "<<count<<endl;
        }
        static void getCount(void){
            cout<<"The value of count is "<<count<<endl;
        }
};
// count is the static data member
int Employee::count=0; // Default value is 0;


int main(){
    Employee harry,rohan,lovish;

    harry.setData();
    harry.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lovish.setData();
    lovish.getData();
    Employee::getCount();
    return 0;
}