#include<iostream>

using namespace std;
class Height{
    int feet, inches;
    public:
    Height(int feet, int inches){
        this->feet = feet;
        this->inches = inches;
    }
    Height(Height&h){
        this->inches = h.inches;
        this->feet = h.feet;
    }
    void add(Height h1, Height h2){
        this->inches = h1.inches + h2.inches;
        this->feet = h1.feet + h2.feet + this->inches/12;
        this->inches = this->inches % 60;
    }
    void display(){
        cout<<"Height: "<<this->feet<<"feet "<<this->inches<<"inches"<<endl;
    }
};
int main(){
    Height H(12,12),J(5,6);
    H.display();
    J.display();
    Height K(H);
    H.add(K,J);
    H.display();
    return 0;
}