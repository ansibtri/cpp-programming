
#include<iostream>
//Input 20 numbers and find largest
using namespace std;

int main(){
    int i,size=20,max=0;
    int *ptr;
    ptr = new int[size];
    cout<<"Enter the number: "<<endl;
    for(i=0;i<size;i++){
        cin>>ptr[i];
    }
    max=ptr[0];
    for(i=0;i<size;i++){
        if(ptr[i]>max){
            max= ptr[i];
        }
    }
    cout<<"Largest number is: "<<max<<endl;
    return 0;
}