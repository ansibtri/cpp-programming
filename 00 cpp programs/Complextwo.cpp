#include<iostream>

using namespace std;

class Complex{
    int real,image;
    public:
    Complex(){}
        Complex(int real, int image){
            this->real = real;
            this->image = image;
        }
        void add(Complex c1, Complex c2){
            this->real = c1.real+c2.real;
            this->image = c1.image+c2.image;
        }
        void get(){
            cout<<"Complex number is: "<<real<<"+"<<image<<"i"<<endl;
        }
};
int main(){
    Complex c1(4,5),c2(5,6),c3;
    c3.add(c1,c2);
    c1.get();
    c2.get();
    c3.get();
    return 0;
}