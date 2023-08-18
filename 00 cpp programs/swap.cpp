#include<iostream>

using namespace std;
class B;
class A{
    int a;
    public: void set(int num){a=num;}
            void get(){cout<<"The value of a is "<<a<<endl;}
            friend void swap(A&, B&);
};
class B{
    int b;
    public: void set(int num){b = num;}
            void get(){cout<<"The value of b is "<<b<<endl;}
            friend void swap(A&, B&);
};
void swap(A &a, B &b){
    int temp = a.a;
    a.a = b.b;
    b.b = temp;
}
int main(){
    A a;
    B b;
    a.set(7);
    b.set(8);
    cout<<"The value before swapping: "<<endl;
    a.get();
    b.get();
    cout<<"The value after swapping: "<<endl;
    swap(a,b);
    a.get();
    b.get();

    return 0;
}