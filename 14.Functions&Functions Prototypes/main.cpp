#include<iostream>

using namespace std;
// function prototype
// type function-name (arguments) 
int sum(int a,int b);
void g(void);
int main(){
    int num1,num2;
    // num1 and num2 are actual parameters
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter 2nd number"<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1,num2);
    return 0;
}
void g(){
    cout<<"\nHello, Good Morning";
}
int sum(int a, int b){
    // a and b are formal paramteres as they take value from actual parameters
    int c=a+b;
    return c;
}