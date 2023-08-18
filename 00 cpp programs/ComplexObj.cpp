#include<iostream>

using namespace std;

class Complex{
    int real,image;
    public:
        void set(){
            cout<<"Enter Real: ";cin>>real;
            cout<<"Enter Imaginary: ";cin>>image;
        }
        void get(){
            cout<<real<<"+"<<image<<"i"<<endl;
        }
        Complex sum(Complex c1, Complex c2){
            Complex temp;
            temp.real = c1.real + c2.real;
            temp.image = c1.image + c2.image;
            return temp;
        }
};
int main(){
    Complex c1, c2;
    c1.set();
    c2.set();
    c1.get();
    c2.get();
    c2 = c2.sum(c1,c2);
    c2.get();
    return 0;
}