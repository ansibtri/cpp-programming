#include<iostream>

using namespace std;

int main(){
    for(int i=0; i<10;i++){
        cout<<"Hello World"<<endl;
    }
    int a= true,i=1;
    while(a){
        cout<<i<<endl;
        i++;
        if(i==10){
            a=false;
        }
    }
    cout<<"Do while loop prints the statement"<<endl;
    do{
        cout<<i<<endl;
    }while(a);
}