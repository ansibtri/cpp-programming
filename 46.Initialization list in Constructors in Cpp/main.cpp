#include<iostream>

using namespace std;
// Syntax for initialization list in constructor:
// constructor (argument-list): initialization-section 
// {
// assignment + other code; 
// }
class Test{
int a;
int b;
public:
// Test(int i, int j):a(i),b(2*j)
Test(int i, int j):a(2*i),b(a*j)
{
    cout<<"Constructor Executed"<<endl;
    cout<<"Value of a is "<<a<<endl;
    cout<<"Value of b is "<<b<<endl;
}
~Test(){}
};
int main(){
    Test a(3,4);
    return 0;
}