#include<iostream>

using namespace std;
template <class T>
class Harry{
    public: int data;
    Harry(T a){
        data = a;
    }
    void display();
};
template <class T>
void Harry<T>::display(){
        cout<<"data:"<<data<<endl;
    }
void func(int a){
    cout<<"I am first func()"<<endl;
}
template <class T>
void func(T a){
    cout<<"I am 2nd func() "<<endl;
    func(6);
}

int main(){
    Harry<int> h(5);
    cout<<h.data<<endl;
    h.display();
    func(4.5);
    return 0;
}