#include<iostream>

using namespace std;

class Complex{
    int a,b;
    public:
    Complex(int,int); //Constructor

    void printNumber(){
        cout<<"Your Number is "<<a<<"+"<<b<<"i"<<endl;
    }
};
// This is a parameterized construction as it takes no parameters
Complex::Complex(int x, int y){
    a=x;
    b=y;
}
int main(){
    // Implicit Call 
    Complex a(4,6);
    a.printNumber();

    // Explicit Call 
    Complex b = Complex(5,7);
    b.printNumber();
    return 0;
}