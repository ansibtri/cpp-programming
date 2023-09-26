#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ofstream outfile("ITEM");
    char name[20];
    cout<<"Enter item name: ";
    cin>>name;
    outfile<<name<<endl;
    float cost;
    cout<<"Enter the item cost";
    cin>>cost;
    outfile<<cost<<endl;
    outfile.close();

    ifstream infile("ITEM");
    infile>>name;
    infile>>cost;
    cout<<"Item Name:"<<name<<endl;
    cout<<"Item cost: "<<cost<<endl;
    infile.close();
    return 0;
}