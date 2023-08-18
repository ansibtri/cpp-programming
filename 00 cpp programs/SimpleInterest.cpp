#include<iostream>

using namespace std;

class Interest{
    float principal;
    float rate;
    float time;
    float interest;

    public: void set(float principal, float time, float rate = 12.00){
        this->principal = principal;
        this->rate = rate;
        this->time = time;
    }
    void get(){
        this->interest = (this->principal * this->time * this->rate)/100;
        cout<<"The SI is "<<this->interest<<endl;
    }
};
int main(){
    float principal;
    float time;
    Interest I[5];
    for(int i=0;i<5;i++){
        cout<<"Principal:";cin>>principal;
        cout<<"Time:";cin>>time;
        I[i].set(principal, time);
    }
    for(int i=0;i<5;i++){
        I[i].get();
    }
    return 0;
}