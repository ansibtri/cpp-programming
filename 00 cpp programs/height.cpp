#include<iostream>

using namespace std;
class Height{
    int foot;
    int inches;

    public:
        void set(){
            cout<<"Enter foot: "<<endl;
            cin>>foot;
            cout<<"Enter inches: "<<endl;
            cin>>inches;
        }
        void get(){
            cout<<"Height: "<<foot<<"ft. "<<inches<<"in"<<endl;
        }
        void sum(Height h1, Height h2){
            inches = h1.inches + h2.inches;
            foot = h1.foot + h2.foot + inches/12;
            inches = inches%12;
        }
};
int main(){
    Height h1,h2,h3;
    h1.set();
    h2.set();
    h1.get();
    h2.get();

    h3.sum(h1,h2);
    h3.get();
    return 0;
}