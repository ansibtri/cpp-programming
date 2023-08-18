
#include<iostream>

using namespace std;

int main(){
    int i,size,sum=0;
    int *ptr;
    cout<<"How many numbers would like to enter?"<<endl;cin>>size;
    ptr = new int[size];
    cout<<"Enter the number: "<<endl;
    for(i=0;i<size;i++){
        cin>>ptr[i];
        sum += ptr[i];
    }
    cout<<"Number you have entered: "<<endl;
    for(i=0;i<size;i++){
        cout<<ptr[i]<<endl;
    }
    cout<<"Sum is: "<<sum<<endl;
    delete []ptr;
    return 0;
}