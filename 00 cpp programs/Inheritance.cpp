#include<iostream>

using namespace std;

class Base{
    protected:
        int x,y, sum;
    public:
        void set(int i, int j){
            x = i;
            y = j;
        }
    friend void display(Base);

};
void display(Base B){
        cout<<"The vector sum is: "<<B.sum;
}
class Derived:public Base{
    public:
        void add_vector(){
            sum = x+y;
        }
};

int main(){
    Derived D;
    D.set(4,5);
    D.add_vector();
    display(D);
    return 0;
}