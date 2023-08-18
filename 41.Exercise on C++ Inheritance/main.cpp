#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
    int a, b;

public:
    void getData()
    {
        cout << "Enter the value of a" << endl;
        cin >> a;
        cout << "Enter the value of b" << endl;
        cin >> b;
    }
    void performOperations()
    {
        cout << "The value of a+b is: " << a + b << endl;
        cout << "The value of a-b is: " << a - b << endl;
        cout << "The value of a*b is: " << a * b << endl;
        cout << "The value of a/b is: " << a / b << endl;
    }
};

class ScientificCalculator
{
    int a, b;

public:
    void getData()
    {
        cout << "Enter the value of a" << endl;
        cin >> a;
        cout << "Enter the value of b" << endl;
        cin >> b;
    }
    void performOperations()
    {
        cout << "The value of cos(a) is: " << cos(a) << endl;
        cout << "The value of cos(b) is: " << cos(b) << endl;
        cout << "The value of sin(a) is: " << sin(a) << endl;
        cout << "The value of sin(b) is: " << sin(b) << endl;
        cout << "The value of exp(a) is: " << exp(a) << endl;
        cout << "The value of tan(a) is: " << tan(a) << endl;
    }
};
class HypridCalculator: public SimpleCalculator, public ScientificCalculator{

};
int main()
{
    HypridCalculator calc;
    calc.SimpleCalculator::getData();
    calc.ScientificCalculator::getData();
    calc.SimpleCalculator::performOperations();
    calc.ScientificCalculator::performOperations();

    return 0;
}