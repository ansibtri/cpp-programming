#include<iostream>

using namespace std;

class Deposit{
    int principal;
    int years;
    float interestRate;
    float returnValue;

    public:
        Deposit(){}
        Deposit(int p, int y, float r);
        Deposit(int p, int y, int r);
        void show();

};
Deposit::Deposit(int p, int y, float r){
    principal=p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for(int i=0;i<years;i++){
        returnValue = returnValue * (1+r);
    }
}

Deposit::Deposit(int p, int y, int r){
    principal=p;
    years = y;
    interestRate = float(r)/100;
    returnValue = principal;
    for(int i=0;i<years;i++){
        returnValue = returnValue * (1+interestRate);
    }
}

void Deposit::show(){
    cout<<endl
    <<"Principal amount was "<<principal
    <<endl
    <<"Return value after "<<years
    <<" is "<<returnValue<<endl;
}

int main(){
    Deposit d1,d2,d3;
    int p, y;
    float r;
    int R;
    cout<<"Enter the value of p, y and r"<<endl;
    cin>>p>>r>>y;
    d1 = Deposit(p,y,r);
    // d1.show();

    cout<<"Enter the value of p, y and R"<<endl;
    cin>>p>>R>>y;
    d2 = Deposit(p,y,R);
    d2.show();
    return 0;
}