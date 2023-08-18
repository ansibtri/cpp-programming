#include<iostream>

using namespace std;
class class2;
class class1{
    int a;
    public: void setValue(int num){a = num;}
    friend void max(class1, class2);
};
class class2{
    int b;
    public: void setValue(int num){b=num;}
    friend void max(class1, class2);
};
void max(class1 A, class2 B){
    A.a>B.b?cout<<A.a<<" is greater."<<endl:cout<<B.b<<" is greater"<<endl;
}
int main(){
    class1 A;
    class2 B;
    A.setValue(34);
    B.setValue(56);
    max(A,B);
    return 0;
}