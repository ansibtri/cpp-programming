#include<iostream>

using namespace std;
class Height{
    int foot;
    int inches;

    public:
        void setHeight(){
            cout<<"Enter foot: "<<endl;
            cin>>foot;
            cout<<"Enter inches: "<<endl;
            cin>>inches;
        }
        void getHeight(){
            cout<<"Height: "<<foot<<"ft. "<<inches<<"in"<<endl;
        }
        void calcHeight(Height h1, Height h2){
            int ft=0;
            int inch= h1.inches + h2.inches;
            if(inch>=12){
                ft = inch/12;
                inches = inch%12;
            }
            foot = h1.foot + h2.foot + ft;
        }
};
int main(){
    Height h1,h2,h3;
    cout<<20%12<<endl;
    h1.setHeight();
    h2.setHeight();
    h1.getHeight();
    h2.getHeight();

    h3.calcHeight(h1,h2);
    h3.getHeight();
    return 0;
}