#include<iostream>

using namespace std;

class Base{
    private:
        int a;
    protected:
        int b;
};

// For a protected member:
//              | Public Deivation | Private Derivation | Protected Derivation
// -------------------------------------------------------------------------------
// 1.Private    | Not Inherited    | Not Inherited      | Not Inherited
// 2.Protected  | Protected        | Private            | Protected
// 3.Public     | Public           | Private            | Protected


class Derived: protected Base{

};
int main(){
    Base b;
    Derived d;
    // cout<<d.b; // will not wor since b is protected in both classes 

    return 0;
}