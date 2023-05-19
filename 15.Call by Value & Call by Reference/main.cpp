#include<iostream>

using namespace std;

int sum(int a,int b){
    int c = a+b;
    return c;
}
int swap(int a, int b){
    int temp = a;
    a = b;
    b= temp;

    // without using 3rd variables
    // a=a+b;
    // b=a-b;
    // a=a-b;
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
}

// Call by reference using pointers
void swapPointer(int* a,int* b){
    int temp=*a;
    *b=*a;
    *a=temp;
    cout<<"The value of a is "<<*a<<" and the value of b is "<<*b<<endl;
}

// Call by reference using C++ reference variables
// void swapReferenceVar(int &a, int &b){
//     int temp = a;
//     a = b;
//     b = temp;

//     return a;
// }
int & swapReferenceVar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;

    return a;
}
int main(){
    int a=4,b=5;
    // cout<<"The sum of 4 and 5 is "<<sum(4,5)<<endl;
    // cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;

    // swap(a,b); // call by value
    // swapPointer(&a,&b); // Call by reference using pointers
    // swapReferenceVar(a,b) // Call by reference using C++ reference variables
    swapReferenceVar(a,b) = 766;
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;

    return 0;
}