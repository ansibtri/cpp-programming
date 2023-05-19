#include<iostream>

using namespace std;

int main(){
    int marks[]={23,34,56,89};
    // cout<<"These are marks "<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // int mathMarks[4];
    // cout<<""<<endl;
    // mathMarks[0]=78;
    // mathMarks[1]=32;
    // mathMarks[2]=321;
    // mathMarks[3]=999;

    // cout<<"These are math marks "<<endl;
    // cout<<mathMarks[0]<<endl;
    // cout<<mathMarks[1]<<endl;
    // cout<<mathMarks[2]<<endl;
    // cout<<mathMarks[3]<<endl;

    // ***Pointers and Arrays
    // cout<<marks<<endl;
    int *p = marks;
    // cout<<*(p++)<<endl;
    // cout<<*(p)<<endl;
    // cout<<*(++p)<<endl;
    // cout<<*(++p)<<endl;
    cout<<*(p)<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;
}
