#include<iostream>

using namespace std;
class Time{
    int hour;
    int minute;
    int second;

    public:
        void setTime(){
            cout<<"Enter Hour: ";
            cin>>hour;
            cout<<"Enter minute: ";
            cin>>minute;
            cout<<"Enter second: ";
            cin>>second;
        }
        void getTime(){
            cout<<"Time is: "<<hour<<"hr:"<<minute<<"m:"<<second<<"s"<<endl;
        }
        void calcTime(Time t1, Time t2){
            int secs = t1.second + t2.second;
            int min = 0;
            int hr = 0;
            if(secs>=60){
                min = secs/60;
                second = secs%60;
            }
            minute = t1.minute+t2.minute + min;
            if(minute >= 60){
                hr = minute/60;
                minute=minute%60;
            }
            hour = t1.hour + t2.hour + hr;
        }
};
int main(){
    Time t1, t2, t3;
    t1.setTime();
    t2.setTime();
    t1.getTime();
    t2.getTime();
    t3.calcTime(t1,t2);
    t3.getTime();
    return 0;
}