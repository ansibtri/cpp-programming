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
    friend void add(Time,Time);
};
void add(Time t1, Time t2){
    int s,m,h;
    s = t1.seconds + t2.seconds;
    m = t2.minutes + t1.minutes + s/60;
    s = s%60;
    h = t1.hours + t2.hours + m/60;
    m = m%60;
    cout<<"Total Time is:"<<endl;
    cout<<h<<":"<<m<<":"<<s<<endl;
}
int main(){
    Time t1(34,54,33),t2(5,68,5);
    add(t1,t2);
}