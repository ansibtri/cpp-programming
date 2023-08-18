#include<iostream>

using namespace std;
template<class T>
class compare{
    private: T a,b;
    public: compare(T x, T y){
        a=x;b=y;
    }
    void max(){
        if(a>b){
            cout<<"max is: "<<a<<endl;
        }else{
            cout<<"max is: "<<b<<endl;
        }
    }
};
int main(){
    compare <int>c(3,4);
    compare <float>d(7,8);
    c.max();
    d.max();
    return 0;
}