#include<iostream>

using namespace std;

class class2; // forward declaration
class class1{
    int a;
    public:
        void setValue(int num){
            a=num;
        }
    friend void max(class1,class2);
};
class class2{
    int b;
    public:
        void setValue(int num){
            b=num;
        }
    friend void max(class1, class2);
};
void max(class1 c1, class2 c2){
    c1.a > c2.b ? cout<<c1.a<<" is maximum":cout<<c2.b<<" is maximum";
}
int main(){
    class1 c1;
    class2 c2;
    c1.setValue(5);
    c2.setValue(4);
    max(c1,c2);
    return 0;
}