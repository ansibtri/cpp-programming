#include<iostream>

using namespace std;

class Base1{
    public:
        void greet(){
            cout<<"How are you?"<<endl;
        }
};
class Base2{
    public:
        void greet(){
            cout<<"K xa?"<<endl;
        }

};
class Derived: public Base1, public Base2{
    int a;
    // using Base1::greet;
    public:
    // for ambiguity 2 
        void greet(){
            cout<<"H";
        }
};
int main(){
    // Ambiguity 1 
    // Base1 obj1;
    // Base2 obj2;
    // obj1.greet();
    // obj2.greet();
    // Derived obj;
    // obj.greet();

    // Ambiguity 2
    Derived obj;
    // obj.Base1::greet();
    // obj.Base2::greet();
    obj.greet();
    return 0;
}