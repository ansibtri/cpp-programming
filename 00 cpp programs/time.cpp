#include<iostream>

using namespace std;
class Time{
    int hour;
    int minute;
    int second;

    public:
        void set(){
            cout<<"Enter Hour: ";
            cin>>hour;
            cout<<"Enter minute: ";
            cin>>minute;
            cout<<"Enter second: ";
            cin>>second;
        }
        void get(){
            cout<<"Time is: "<<hour<<"hr:"<<minute<<"m:"<<second<<"s"<<endl;
        }
        void sum(Time t1, Time t2){
            second = t1.second + t2.second;
            minute = t1.minute + t2.minute + second/60;
            second = second % 60;
            hour = t1.hour + t2.hour + minute/60;
            minute = minute % 60;
        }
};
int main(){
    Time t1, t2, t3;
    t1.set();
    t2.set();
    t1.get();
    t2.get();
    t3.sum(t1,t2);
    t3.get();
    return 0;
}