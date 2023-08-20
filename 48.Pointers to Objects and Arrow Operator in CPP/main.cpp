#include<iostream>

using namespace std;
class Complex{
    int real, imaginary;
    public:Complex(){}
        Complex(int r, int j){
            real = r;
            imaginary = j;
        }
        void getData(){
            cout<<"The real part is "<<real<<endl;
            cout<<"The imaginary part is "<<imaginary<<endl;
        }
        void setData(int a, int b){
            real = a;
            imaginary = b;
        }
};
int main(){
    // Complex c1;
    // Complex *ptr = &c1;
    // (*ptr).setData(1,54);
    // (*ptr).getData();

    Complex *ptr = new Complex;
    ptr->setData(1,54);
    ptr->getData();

    // Array of Objects 
    // Complex *arr = new Complex[4];
    // arr->setData(1,4);
    // arr->getData();
    // (arr+1)->setData(2,4);
    // (arr+1)->getData();
    return 0;
}