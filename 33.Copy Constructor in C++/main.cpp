#include<iostream>

using namespace std;

class Number{
    int a;
    public:
        Number(){}

        Number(int num){
            a = num;
        }
        // When no copy contructor is found, compiler supplies its own copy constructor
        // Number(Number &obj){
        //     cout<<"Copy constrcutor called";
        //     a = obj.a;
        //     cout<<endl;
        // }

        void display(){
            cout<<"The number for this object is "<<a<<endl;
        }
};
int main(){
    Number a,x(4),y(3333),z(45),z2;
    z.display();
    // z1 should exactly resembe z or x or y
    Number z1(z);
    z1.display();
    z2=z;
    z2.display();
    Number z3 = y; // copy constructor invoked
    z3.display();
    return 0;
}