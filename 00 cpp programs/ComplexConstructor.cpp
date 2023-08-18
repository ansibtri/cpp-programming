#include<iostream>

using namespace std;

class Complex{
    int real,image;

    public: Complex(int real, int image){
        this->real = real;
        this->image = image;
    }
    void add(Complex c1){
        this->real += c1.real;
        this->image += c1.image;
    }
    void get(){
        cout<<this->real<<"+"<<this->image<<"i"<<endl;
    }
};
int main(){
    Complex C(12,13);
    Complex D(13,14);
    C.get();
    D.get();
    C.add(D);
    C.get();
    return 0;
}