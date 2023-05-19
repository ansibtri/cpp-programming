#include<iostream>
// There are two types of header files:
// 1. System header files: It comes with the compiler
// 2. User defined header files: It is written by the programmer 
using namespace std;

#include "this.h" // user-defined header files

int main(){
    int a = 4, b= 5;
    cout<<"\nOperators in c++:"<<endl;
    cout<<"Type of operators:"<<endl;
    cout<<"1.Arithmetic Operators"<<endl;
    cout<<"2.Increment/Decrement Operators"<<endl;
    cout<<"3.Assignment Operators"<<endl;
    cout<<"4.Comparison Operators"<<endl;
    cout<<"5.Logical Operators"<<endl;
    cout<<"\n"<<endl;
    cout<<"Following are the types of operators in C++"<<endl;
    cout<<"1.Arithmetic Operators"<<endl;
    cout<<"\ti.The value of a+b is "<<a+b<<endl;
    cout<<"\tii.The value of a-b is "<<a-b<<endl;
    cout<<"\tiii.The value of a*b is "<<a*b<<endl;
    cout<<"\tiv.The value of a/b is "<<a/b<<endl;
    cout<<"\tv.The value of a%b is "<<a%b<<endl;
    cout<<"\n";
    cout<<"2.Increment/Decrement Operators"<<endl;
    cout<<"\ti.The value of a++ is "<<a++<<endl;
    cout<<"\tii.The value of a-- is "<<a<<endl;
    cout<<"\tiii.The value of ++a is "<<++a<<endl;
    cout<<"\tiv.The value of --a is "<<--a<<endl;

    cout<<"3.Assignment Operators"<<endl;
    cout<<"\ti.= is used as assignment operator\n"<<endl;
    a = 4, b= 5;
    cout<<"4.Comparison Operators"<<endl;
    cout<<"\ti.The value of a==b is "<<(a==b)<<endl;
    cout<<"\tii.The value of a!=b is "<<(a!=b)<<endl;
    cout<<"\tiii.The value of a>=b is "<<(a>=b)<<endl;
    cout<<"\tiv.The value of a<=b is "<<(a<=b)<<endl;
    cout<<"\tv.The value of a<b is "<<(a<b)<<endl;
    cout<<"\tvi.The value of a>b is "<<(a>b)<<endl;

    cout<<"5.Logical Operators"<<endl;
    cout<<"\ti.The value of logical and operator for (a==b) is "<<((a==b)&&(a<=b))<<endl;
    cout<<"\tii.The value of logical or operator for (a||b) is "<<((a==b)||(a<=b))<<endl;
    cout<<"\tiii.The value of logical not operator (!(a==b)) is: "<<(!(a==b))<<endl;

    getchar();
    return 0;
    
}