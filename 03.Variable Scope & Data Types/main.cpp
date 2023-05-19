#include<iostream>

using namespace std;
int glo = 6;
void sum(){
    int a;
    cout<<glo;
}
int main(){
    int glo = 9;
    int a = 14;
    int b = 15;
    float pi = 1.42;
    char c = 'u';
    bool is_true = true;
    sum();
    cout<<glo<<is_true;
    // cout<<glo;
    // cout<<"This is tutorial 4. Here the value of a is"<<a<<",The vlaue of b is"<<b;
    // cout<<"\nThe value of pi is "<<pi;
    // cout<<"\nThe value of c is "<<c;
    return 0;
}