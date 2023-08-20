#include<iostream>

using namespace std;

float funcAverage(int a, int b){
    float avg = (a+b)/2;
    return avg;
}
template<class T1, class T2>
float function(T1 x,T2 y){
    float avg = (x+y)/2;
    return avg;
}
int main(){
    float a;
    a = function(4,5);
    cout<<a<<endl;
    return 0;
}