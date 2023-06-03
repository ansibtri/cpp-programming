// WAP to input marks of 5 subjects and find percentage and division obtained by students considering full marks of each subject is 100.

#include<iostream>

using namespace std;

int main(){
    string division;
    float percent,obtainMarks=0,marks[5];
    int totalFullMarks = 500;
    cout<<"Enter marks of 5 subjects:";
    for(int i=0;i<5;i++){
        cin>>marks[i];
        obtainMarks+=marks[i];
    }
    percent = (obtainMarks/(float) totalFullMarks)*100;
    if(percent >= 80){
        division = "Distinction";
    }else if(percent>=70){
        division = "1st Division";
    }else if(percent >= 60){
        division = "2nd Division";
    }else if(percent >= 50){
        division="3rd Division";
    }else if(percent >=35){
        division="Pass";
    }else{
        division="Fail";
    }
    cout<<"The student achieve "<<percent<<" and "<<division<<" division"<<endl;



    return 0;
}