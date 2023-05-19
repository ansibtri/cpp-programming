#include<iostream>

using namespace std;
int c = 45;
int main(){

    // ***Built in data types***
    // int a,b,c;
    // cout<<"Enter the value of a: "<<endl;
    // cin>>a;
    // cout<<"Enter the value of b: "<<endl;
    // cin>>b;
    // c=a+b;
    // cout<<"the sum is "<<c<<endl;
    // cout<<"The global c is "<<::c;

    // ***float, double and long double Literals***
    // float d = 34.4f;
    // long double e=34.4l;
    // cout<<"The sizeof 34.4 is "<<sizeof(34.4)<<endl;
    // cout<<"The sizeof 34.4f is "<<sizeof(34.4f)<<endl;
    // cout<<"The sizeof 34.4F is "<<sizeof(34.4F)<<endl;
    // cout<<"The sizeof 34.4L is "<<sizeof(34.4L)<<endl;
    // cout<<"The sizeof 34.4l is "<<sizeof(34.4l)<<endl;
    // cout<<"The value of d is "<<d<<"\nThe value of e is "<<e<<endl;

    // ***Reference Variables
    // float x = 455;
    // float &y = x;
    // cout<<&x<<endl;
    // cout<<&y<<endl;

    // ***Typecasting***
    int a = 45;
    float b = 45.56;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of b is "<<(int)b<<endl;

    cout<<"The value of a is "<<float(a)<<endl;
    cout<<"The value of b is "<<int(b)<<endl;
    int c = int(b);
    
    cout<<"The expression is "<<a+b<<endl;
    cout<<"The expression is "<<a + int(b)<<endl;
    cout<<"The expression is "<<a + (int)b<<endl;
    cout<<"The expression is "<<float(a+b)<<endl;

    return 0;

}