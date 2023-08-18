#include<iostream>

using namespace std;
class B; // forward declaration
class A{
    int a;
    public:
        void set(int num){
            a = num;
        }
        void get(){
            cout<<"The value of A is "<<a<<endl;
        }
        friend void add(A,B);
};
class B{
    int b;
    public:
        void set(int num){
            b = num;
        }
        void get(){
            cout<<"The value of B is "<<b<<endl;
        }
        friend void add(A,B);
};
void add(A a, B b){
    cout<<"The sum is "<<a.a+b.b<<endl;
}
int main(){
    A a;
    B b;
    a.set(5);
    b.set(6);
    add(a,b);
    return 0;
}