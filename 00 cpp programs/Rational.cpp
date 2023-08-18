#include <iostream>

using namespace std;

class Rational
{
    int numerator;
    int denumerator;

public:
    void set(int x, int y)
    {
        numerator = x;
        denumerator = y;
    }
    void get()
    {
        cout << "The numerator is " << numerator << " and "
             << "denumerator is " << denumerator << endl;
    }
    friend void max(Rational);
};
void max(Rational R)
{
    R.numerator > R.denumerator ? cout << "Numerator is maximum" << endl : cout << "Denumerator is maximum" << endl;
}
int main()
{
    Rational R;
    R.set(4,5);
    R.get();
    max(R);
    return 0;
}