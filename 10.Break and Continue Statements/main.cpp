#include<iostream>

using namespace std;

int main(){
    for(int i=0; i<10; i++){
        if(i==4){
            cout<<"Break at point 4"<<endl;
            continue;
            //The statement written after break willnot be executed.
        }
        cout<<i<<endl;
    }
    cout<<endl;
    bool condition = true;
    int i=0;
    while (condition)
    {
        if(i==7){
            condition = false;
            cout<<"The statement is skipped at point 7"<<endl;
            continue;
            //The statement written after continue will not be executed.
        }
        cout<<i<<endl;
        i++;
    }
    
}