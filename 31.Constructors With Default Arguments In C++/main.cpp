#include<iostream>

using namespace std;

class Simple{
    int datum1;
    int datum2;
    public:
        Simple(int a,int b=9){
            datum1 = a;
            datum2 = b;
        }
        void getData(){
            cout<<"The value of datum1 is "<<datum1<<" and "<<"datum2 is "<<datum2<<endl;
        }
};
int main(){
    Simple s(1,4);
    s.getData();
    return 0;
}