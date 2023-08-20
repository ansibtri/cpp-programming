#include<iostream>

using namespace std;
class A{
    public:
    int a;
    virtual void set(int a){
        this->a = a;
    }
    virtual void get(){
        cout<<"Value of a is: "<<this->a<<endl;
    }
};
class B: public A{
    public:
    int b;
    void set(int b){
        this->b = b;
    }
    void get(){
        cout<<"Value of b is: "<<b<<endl;
    }
};
class C: public B{
    public:
    int c;
    void set(int c){
        this->c = c;
    }
    void get(){
        cout<<"Value of c is: "<<c<<endl;
    }
};
int main(){
    // A * class_a_pointer;
    // A a;
    // class_a_pointer = &a;
    // class_a_pointer -> set(7);
    // class_a_pointer -> get();
    // B b;
    // class_a_pointer = &b;
    // class_a_pointer -> set(8);
    // class_a_pointer -> get();
    // C c;
    // class_a_pointer = &c;
    // class_a_pointer -> set(9);
    // class_a_pointer -> get();

    C * class_c_pointer;
    C c;
    class_c_pointer = &c;
    class_c_pointer ->A::set(5);
    class_c_pointer ->A::get();
    return 0;
}