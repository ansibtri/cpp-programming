#include<iostream>

using namespace std;
class Time{
    int hours;
    int minutes;
    int seconds;

    public: Time(int hours, int minutes, int seconds){
        this->hours = hours;
        this->minutes = minutes;
        this->seconds = seconds;
    }
    void add(Time t1){
        this->seconds = t1.seconds + this->seconds;
        this->minutes = t1.minutes + this->minutes + this->seconds/60;
        this->seconds = this->seconds % 60;
        this->hours = t1.hours + this->hours + this->minutes/60;
        this->minutes = this->minutes % 60;
    }
    void display(){
        cout<<"Total Time is: "<<this->hours<<":"<<this->minutes<<":"<<this->seconds<<endl;
    }
};
int main(){
    Time T(34,56,98);
    Time E(45,67,45);
    T.display();
    E.display();
    T.add(E);
    T.display();
    return 0;
}