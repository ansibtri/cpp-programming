#include<iostream>

using namespace std;

int floors(float x){
    if(x<0){
        return (int)x-1;
    }
    return (int)x;
}
int ceils(float x){
    if(x>0){
        return (int)x+1;
    }
    return (int)x;
}
int main(){
    cout<<"Value passed: 4.5 and -4.5"<<endl;
    cout<<"Floor(-4.5):"<<floors(-4.5)<<endl;
    cout<<"Ceil(-4.5): "<<ceils(-4.5)<<endl;
    cout<<"Floor(4.5): "<<floors(4.5)<<endl;
    cout<<"Ceil(4.5): "<<ceils(4.5)<<endl;
    return 0;
}