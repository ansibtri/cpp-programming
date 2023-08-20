#include<iostream>
using namespace std;
template<class T>
class sample{
    private:
        T a,b,s;
    public:
    sample(T x, T y){
        a=x;
        b=y;
    }
    void calculate(){
        s=a+b;
    }
    void display(){
        cout<<"sum="<<s<<endl;
    }
};
int main(){
    sample <int> s1(5,8);
    sample<float> s2(3.5, 8.9);
    cout<<"For integer values:"<<endl;
    s1.calculate();
    s1.display();
    cout<<"For float values"<<endl;
    s2.calculate();
    s2.display();
    return 0;
}