
#include<iostream>

using namespace std;
class Complex{
    private:
        int *real, *image;
    public:
        Complex(){
            real = new int;
            image = new int;
            *real =0;
            *image = 0;
        }
        Complex (int r, int i){
            real = new int;
            *real = r;
            image = new int;
            *image= i;
        }
        void addComplex(Complex c1,Complex c2){
            *real = *c1.real + *c2.real;
            *image = *c1.image + *c2.image;
        }
        void display(){
            cout<<*real <<"+"<<*image<<"i"<<endl;
        }
        ~Complex(){
            delete real;
            delete image;
        }
};
int main(){
        Complex c1(5,10);
        Complex c2(2,4);
        Complex c3;
        c3.addComplex(c1,c2);
        c1.display();
        c2.display();
        c3.display();
    return 0;
}