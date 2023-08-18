// WAP to add private data of three different classes using friend.
#include<iostream>

using namespace std;
class B;
class C;
class A{
    int a;
    public: void set(int num){a = num;}
    friend void sum(A,B,C);
};
class B{
    int b;
    public: void set(int num){b = num;}
    friend void sum(A,B,C);
};
class C{
    int c;
    public: void set(int num){c=num;}
    friend void sum(A,B,C);
};
void sum(A a, B b, C c){
    cout<<"Sum="<<a.a+b.b+c.c;
}
int main(){
    A a;
    B b;
    C c;
    a.set(5);
    b.set(6);
    c.set(7);
    sum(a,b,c);
    return 0;
}