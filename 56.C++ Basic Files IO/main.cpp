#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int arr[] = {5,6};
    ofstream hout("Sample60.txt");
    cout<<"Enter Your Name: ";
    string name;
    cin>>name;
    hout<<name;
    hout<<arr;
    hout.close();

    ifstream hin("Sample60.txt");
    string content;
    hin>>content;
    cout<<"The content of this file is: "<<content;
    return 0;
}