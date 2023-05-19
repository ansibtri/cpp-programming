#include<iostream>

using namespace std;

struct employee{
    /* data */
    int eId;
    char favChar;
    float salary;
};
union money{
    int rice;
    char car;
    float pounds;
};

int main(){
    // accessing structure
    // struct employee harry;
    // harry.eId = 1;
    // harry.favChar = 'c';
    // harry.salary = 120000;
    // cout<<"The value is "<<harry.eId<<endl;
    // cout<<"The value is "<<harry.favChar<<endl;
    // cout<<"The value is "<<harry.salary<<endl;

    // // accessing union    
    // typedef union money moneyExchange;
    // moneyExchange m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<"The value of rice is "<<m1.rice<<endl;// It will output garbage value as the value is override by m1.car
    // cout<<"The value of car is "<<m1.car<<endl;

    // accessing enum
    enum Meal{breakfast, lunch, dinner};
    Meal c1 = breakfast;
    Meal c2 = lunch;
    Meal c3 = dinner;

    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    cout<<c1<<endl;
    cout<<c2<<endl;
    cout<<c3<<endl;
    
    return 0;
}