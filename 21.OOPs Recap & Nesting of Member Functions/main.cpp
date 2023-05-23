// OOPs - Classes and Objects
    // C++ --> initially called --> C with classes by stroustrup

    // structures had limitations
    //  --> members are public
    //  --> no methods

    // classes --> structures + more
    // classes --> can have methods and properties
    // classes --> can make few members as privatte & few as public
    // structures in C++ are typedefed
    // you can declare objects along with the class declaration
    // example:-
    /* class Employee{
        class definition
    } harry,rohan,lovish; */
    // harry.salary = 8 markes no sense if salary is private
    
//  Nesting of member functions

#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};

void binary::read(void)
{
    cout << "Enter a binary number " << endl;
    cin >> s;
    display();
}
void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << s.at(i) << endl;
            exit(0);
        }
    }
}
void binary::ones_compliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }else{
            s.at(i) = '0';
        }
    }
}
void binary::display(void)
{
    cout << "Displaying your binary number: " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}
int main()
{
    binary b;
    b.read();
    b.chk_bin();
    cout<<endl;
    // b.display();
    // cout<<endl;
    // cout<<"After one's compliment:";
    // b.ones_compliment();
    // cout<<endl;
    // b.display();
    return 0;
}