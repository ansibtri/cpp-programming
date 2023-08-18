#include<iostream>

using namespace std;
class B;
class A{
    int a;
    public: void set(int num){a=num;}
    void get(){cout<<"Value of a is"<<a<<endl;}
    friend void swap(A&, B&);
};
class B{
    int b;
    public: void set(int num){b=num;}
    void get(){cout<<"Value of b is"<<b<<endl;}
    friend void swap(A&, B&);
};
void swap(A& a, B& b){
    int temp = a.a;
    a.a = b.b;
    b.b = temp;
}
int main(){
    A a;
    B b;
    a.set(45);
    b.set(56);
    cout<<"Value before swapping: "<<endl;
    a.get();
    b.get();
    swap(a,b);
    cout<<"Value after swapping: "<<endl;
    a.get();
    b.get();

    return 0;
}