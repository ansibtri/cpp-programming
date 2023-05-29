#include <iostream>

using namespace std;
// Forward declaration
class Complex;
class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(Complex o1, Complex o2);
    int sumCompComplex(Complex o1, Complex o2);
};

class Complex
{
    int a, b;

public:
    // Individually declaring functions as friends
    // friend int Calculator::sumRealComplex(Complex o1, Complex o2);
    // friend int Calculator::sumCompComplex(Complex o1, Complex o2);

    // Alter: Declaring the entire calcultor class as friend
    friend class Calculator;
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    // Below line means that non member-sumComplex function is allowed to do anything with my private members (members)
    friend Complex sumComplex(Complex, Complex);
    void printNumber()
    {
        cout << "Your number is " << a << "+" << b << "i" << endl;
    }
};


int Calculator::sumRealComplex(Complex o1, Complex o2){
    return (o1.a + o2.a);
}
int Calculator::sumCompComplex(Complex o1, Complex o2){
    return (o1.b+o2.b);
}

Complex sumComplex(Complex o1,Complex o2){
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b+o2.b));
    return o3;
}

int main()
{
    Complex o1,o2;
    o1.setNumber(1,4);
    o2.setNumber(5,7);

    Calculator calc;
    int res = calc.sumRealComplex(o1,o2);
    cout<<"The sum of real part of o1 and o2 is "<<res<<endl;
    return 0;
}

// Properties of Friend Functions
// 1. Not in the scope of class
// 2. Since it is not in the scope of the class, it cannot be called from the object of that class
// ---->ex:- c1.sumComplex() == Invalid
// 3. Can be invoked without the help of any object
// 4. Usually contains the objects as arguments
// 5. Can be declared inside public or private section of the class
// 6. It can't access the members directly by their names and need object object_name.member_name to access any member.
