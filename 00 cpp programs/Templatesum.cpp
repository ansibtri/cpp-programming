#include<iostream>
// WAP to perform sum and product of two integer and two floating point data using class template
using namespace std;
template<class T>
class sample{
    private:
    T a,b,s;

    public: 
    void set(T x, T y){
        this->a = x;
        this->b = y;
    }
    void get(){
        cout<<"Sum="<<this->s<<endl;
    }
    void sum(){
        this->s=this->a+this->b;
    }
};
int main(){
    sample<int> s1;
    sample<float> s2;
    s1.set(4,5);
    s2.set(5.6, 7.5);
    s1.sum();
    s2.sum();
    s1.get();
    s2.get();

    return 0;
}