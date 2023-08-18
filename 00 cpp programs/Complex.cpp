#include<iostream>

using namespace std;

class Complex{
    private: int real, image;
    public:
        void set(){
            cout<<"Enter Numbers: "<<endl;
            cout<<"Enter Real Number: ";cin>>real;
            cout<<"Enter Imaginary Number: ";cin>>image;
        }
        void get(){
            cout<<real<<"+"<<image<<"i"<<endl;
        }
        void sum(Complex c1, Complex c2){
            real = c1.real+c2.real;
            image = c2.image + c2.image;
        }
};
int main(){
    Complex c,d,e;
    c.set();
    d.set();
    c.get();
    d.get();

    e.sum(c,d);
    e.get();
    return 0;
}