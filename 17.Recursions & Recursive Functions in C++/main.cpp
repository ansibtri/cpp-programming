#include<iostream>

using namespace std;

// factorial numbers
int fact(int n){
    if(n==1 || n==0){
        return 1;
    }else{
        return n*fact(n-1);
    }
}
// fibonacci numbers 
int fib(int n){
    if(n<2){
        return n;
    }else{
        return fib(n-2) + fib(n-1);
    }
}
int main(){
    int num;
    cout<<"Factorial & Fibonacci Check"<<endl;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"The factorial of the number "<<num<<" is "<<fact(num)<<endl;
    cout<<"The fibonacci at the number "<<num<<" is "<<fib(num)<<endl;
    return 0;
}