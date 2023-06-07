#include <iostream>

using namespace std;

class Complex
{
    int a, b;

public:
    Complex()
    {
        a = 0;
        b = 0;
    }
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }
    void getComplex()
    {
        cout << "Your number is " << a << "+" << b << "i" << endl;
    }
};
int main()
{
    Complex c1(4, 6);
    c1.getComplex();
    Complex c2(5);
    c2.getComplex();
    Complex c3;
    c3.getComplex();
    return 0;
}