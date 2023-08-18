// WAP to add private data of two different classes using friend funciton.
#include<iostream>

using namespace std;
class B;
class A{
    int a;
    public: void set(int num){a = num;}
    friend void sum(A,B);
};
class B{
    int b;
    public: void set(int num){b = num;}
    friend void sum(A,B);
};
void sum(A a, B b){
    cout<<"Sum="<<a.a+b.b;
}
int main(){
    A a;
    B b;
    a.set(5);
    b.set(6);
    sum(a,b);
    return 0;
}