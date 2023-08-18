#include <iostream>

using namespace std;

class Complex
{
private: int real, image;
public:
    void set()
    {
        cout << "Enter real: ";
        cin >> real;
        cout << "Enter image: ";
        cin >> image;
    }
    void get()
    {
        cout << real << "+" << image << "i" << endl;
    }

    Complex sum(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.image = image + c.image;
        return temp;
    }
};
int main()
{
    Complex c,d;
    c.set();
    d.set();
    c.get();
    d.get();
    d=d.sum(c);
    d.get();
    return 0;
}