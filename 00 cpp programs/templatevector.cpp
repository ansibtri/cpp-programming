#include<iostream>

using namespace std;
template<class T>
class vector{
    private: T a,b,c;
    public: vector(T x, T y, T z){
        a=x;b=y;c=z;
    }
    vector(){}
    T operator *(vector p){
        T sum;
        a = a * p.a;
        b = b * p.b;
        c = c * p.c;
        sum=a+b+c;
        return sum;
    }
    void display(){
        cout<<a<<"i+"<<b<<"j+"<<c<<"k"<<endl;
    }
};
int main(){
    vector <int> v(4,5,8);
    vector <int> j(8,9,7);
    vector <int> k;
    cout<<"scalar product is "<<v*j<<endl;
    return 0;
}
