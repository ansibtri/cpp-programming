#include<iostream>

using namespace std;

// class templates with multiple parameters
template<class T1, class T2>
class myClass{
    public: 
    myClass(){
        data1=2;
        data2='7';
    }
    T1 data1;
    T2 data2;

    void display(){
        cout<<"The value is: "<<this->data1<<endl<<this->data2;
    }
};
int main(){
    myClass<int,char> obj;
    obj.display();
    return 0;
}